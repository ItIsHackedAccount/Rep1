#include "tools.h"

Tools::Tools() {}

void Tools::Export(QTableView* tableView){

    QString filePath = QFileDialog::getSaveFileName(
        nullptr,
        "保存为 CSV 文件",
        QDir::homePath() + "/export.csv",
        "CSV 文件 (*.csv)"
        );

    if (filePath.isEmpty()) return;  // 用户取消

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "错误", "无法保存文件：" + file.errorString());
        return;
    }

    QTextStream out(&file);
    QAbstractItemModel* model = tableView->model();

    // 写表头
    QStringList headers;
    for (int col = 0; col < model->columnCount(); ++col)
        headers << model->headerData(col, Qt::Horizontal).toString();
    out << headers.join(",") << "\n";

    // 写数据
    for (int row = 0; row < model->rowCount(); ++row) {
        QStringList rowData;
        for (int col = 0; col < model->columnCount(); ++col)
            rowData << model->data(model->index(row, col)).toString();
        out << rowData.join(",") << "\n";
    }

    file.close();
    QMessageBox::information(nullptr, "导出成功", "数据已成功保存到：\n" + filePath);




}


void Tools::Import(bool useDatabase,QTableView* tableView,QString tableName) {
    QString filePath = QFileDialog::getOpenFileName(
        nullptr,
        "选择 CSV 文件",
        QDir::homePath(),
        "CSV 文件 (*.csv);;所有文件 (*.*)"
        );
    if (filePath.isEmpty()) return;

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "错误", "无法打开文件：" + file.errorString());
        return;
    }

    QTextStream in(&file);
    QStringList headers;
    QVector<QStringList> rows;

    bool isFirstLine = true;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(',');
        fields.removeFirst();

        if (isFirstLine) {
            headers = fields;
            isFirstLine = false;
        } else {
            rows.append(fields);
        }
    }
    file.close();

    if (useDatabase&&!tableName.isNull()) {
      //  QVariantMap qv=  UniversalDbManager::loadDbConfig("config.ini");
        UniversalDbManager &obj=  UniversalDbManager::instance();
        for (const QStringList& row : rows) {
            QVariantMap params;
            for (int i = 0; i < headers.size() && i < row.size(); ++i) {
                params[":" + headers[i]] = row[i].trimmed();
            }

            QStringList columns = headers;  // 原始字段名，如 name, password
            QStringList values;

            for (const QString& col : columns)
                values << ":" + col;


            QString sql = QString("INSERT INTO "+tableName+" (%1) VALUES (%2)")
                              .arg(headers.join(", "))
                              .arg(values.join(", "));

            if (!obj.execute(sql, params)) {
                QMessageBox::warning(nullptr, "插入失败", "某行插入失败，请检查数据格式");
                return;
            }
        }

        QSqlTableModel* model = new QSqlTableModel(nullptr, obj.database());
        model->setTable(tableName);
        model->select();
        tableView->setModel(model);
    } else {
        QStandardItemModel* model = new QStandardItemModel();
        model->setHorizontalHeaderLabels(headers);

        for (const QStringList& row : rows) {
            QList<QStandardItem*> items;
            for (const QString& field : row) {
                items.append(new QStandardItem(field));
            }
            model->appendRow(items);
        }

        tableView->setModel(model);
    }
}




