#include "mainwindow.h"
#include <QCloseEvent>
#include <QMessageBox>
#include <QHostAddress>
#include <QtConcurrent>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), client(nullptr), chartInitialized(false)
{
    ui->setupUi(this);

    connect(ui->actionac1_2, &QAction::triggered, this, [=](){
        ui->stackWidget1->setCurrentIndex(0); // 切换到页面一
    });

    connect(ui->actionac2_2, &QAction::triggered, this, [=](){
        ui->stackWidget1->setCurrentIndex(1); // 切换到页面二
        initChartIfNeeded(); // 延迟初始化图表

    });
    connect(ui->actionac1_3, &QAction::triggered, this, [=](){
        ui->stackWidget1->setCurrentIndex(2); // 切换到页面一
    });

    connect(ui->actionUsers, &QAction::triggered, this, [=](){
        ui->stackWidget1->setCurrentIndex(3); // 切换到页面一
    });


    initDiskTableUI();
    initIPTableUI();
    initChartIfNeeded();
    setTableWidget();
    initialCamera();
    initialParamTableUI();
    showUsers();

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this]() {
         updateSystemStats();
        setIPTable();
         setDiskTable();
    });
    timer->start(1000);  // 每秒刷新一次

}


//查询用户表
void MainWindow::showUsers(){

   QVariantMap qv=  UniversalDbManager::loadDbConfig("config.ini");
    UniversalDbManager &obj=  UniversalDbManager::instance();
  bool b=  obj.connect(qv);
    qDebug() << "连接状态:" << b;

  QSqlQueryModel *model = new QSqlQueryModel(this);
  model->setQuery("SELECT id, name, roles,password FROM Users", obj.database());

  if (model->lastError().isValid()) {
      qDebug() << "查询错误:" << model->lastError().text();
  } else {
      int rows = model->rowCount();
      if (rows > 0) {
          qDebug() << "查询到" << rows << "条数据";
      } else {
          qDebug() << "没有查到数据";
      }
  }
  ui->tableView->setModel(model);
  ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


}

//初始化设置变量表
void MainWindow::initialParamTableUI()
{
    if(!isParamTableInitialized){

    ui->tableWidget_4->setColumnCount(3);
    ui->tableWidget_4->setHorizontalHeaderLabels({"分组", "参数名", "值"});
    ui->tableWidget_4->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableWidget_4->horizontalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #2C3E50;"
        "color: white;"
        "font-weight: bold;"
        "font-size: 14px;"
        "padding: 4px;"
        "border: 1px solid #34495E;"
        "}"
        );
    ui->tableWidget_4->verticalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #34495E;"
        "color: white;"
        "font-weight: bold;"
        "font-size: 12px;"
        "border: 1px solid #2C3E50;"
        "}"
        );
    ui->tableWidget_4->setStyleSheet(
        "QTableWidget {"
        "color: white;"
        "gridline-color: #34495E;"
        "background-color: #1E272E;"
        "selection-background-color: #2980B9;"
        "selection-color: white;"
        "}"
        "QTableCornerButton::section {"
        "background-color: #34495E;"
        "border: 1px solid #2C3E50;"
        "}"
        );
    }
    isParamTableInitialized=true;
    QSettings settings("config.ini", QSettings::IniFormat);
    QStringList groups = settings.childGroups();

    ui->tableWidget_4->setRowCount(0);


    for (const QString &group : groups) {
        settings.beginGroup(group);
        QStringList keys = settings.childKeys();

        for (const QString &key : keys) {
            int row = ui->tableWidget_4->rowCount();
            ui->tableWidget_4->insertRow(row);
            ui->tableWidget_4->setItem(row, 0, new QTableWidgetItem(group));
            ui->tableWidget_4->setItem(row, 1, new QTableWidgetItem(key));
            ui->tableWidget_4->setItem(row, 2, new QTableWidgetItem(settings.value(key).toString()));
        }
        settings.endGroup();
    }
}
//保存变量
void MainWindow::saveParams(){

    QSettings settings("config.ini", QSettings::IniFormat);
    settings.clear(); // 清空旧内容

    for (int row = 0; row <  ui->tableWidget_4->rowCount(); ++row) {
        QString group =  ui->tableWidget_4->item(row, 0)->text();
        QString key   =  ui->tableWidget_4->item(row, 1)->text();
        QString value =  ui->tableWidget_4->item(row, 2)->text();

        settings.beginGroup(group);
        settings.setValue(key, value);
        settings.endGroup();
    }
    settings.sync();
    if (settings.status() == QSettings::NoError) {
        QMessageBox::information(this, "保存成功", "配置已成功保存到文件！");
    } else {
        QMessageBox::critical(this, "保存失败", "保存配置时发生错误！");
    }


}
//设置磁盘表
void MainWindow::initDiskTableUI() {
    auto table = ui->tableWidget_3;
    table->setColumnCount(6);

#ifdef Q_OS_WIN
    table->setHorizontalHeaderLabels({
        "Device", "Total", "Used", "Free", "Volume", "Timestamp"
    });
#else
    table->setHorizontalHeaderLabels({
        "Filesystem", "Size", "Used", "Avail", "Use%", "Timestamp"
    });
#endif

    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    table->horizontalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #2C3E50;"
        "color: white;"
        "font-weight: bold;"
        "font-size: 14px;"
        "padding: 4px;"
        "border: 1px solid #34495E;"
        "}"
        );
    table->verticalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #34495E;"
        "color: white;"
        "font-weight: bold;"
        "font-size: 12px;"
        "border: 1px solid #2C3E50;"
        "}"
        );
    table->setStyleSheet(
        "QTableWidget {"
        "color: white;"
        "gridline-color: #34495E;"
        "background-color: #1E272E;"
        "selection-background-color: #2980B9;"
        "selection-color: white;"
        "}"
        "QTableCornerButton::section {"
        "background-color: #34495E;"
        "border: 1px solid #2C3E50;"
        "}"
        );
}

// 优化后的 setDiskTable
void MainWindow::setDiskTable() {
    static bool busy = false;
    if (busy) return;
    busy = true;

    QPointer<MainWindow> self(this);

    QtConcurrent::run([self]() {
        if (!self) return;

        QProcess process;
        process.setProcessChannelMode(QProcess::MergedChannels);

#ifdef Q_OS_WIN
        process.start("cmd", {"/c", "wmic logicaldisk get DeviceID,FreeSpace,Size,VolumeName"});
#else
        process.start("sh", {"-c", "df -h --output=source,size,used,avail,pcent"});
#endif

        if (!process.waitForStarted()) {
            qDebug() << "Failed to start disk command:" << process.errorString();
            QMetaObject::invokeMethod(self, [](){ busy = false; }, Qt::QueuedConnection);
            return;
        }

        process.waitForFinished();

#ifdef Q_OS_WIN
        QString output = QString::fromLocal8Bit(process.readAll());
#else
        QString output = QString::fromUtf8(process.readAll());
#endif

        QStringList lines = output.split("\n", Qt::SkipEmptyParts);
        QList<QStringList> parsedRows;

        bool firstLine = true;
        for (const QString &line : lines) {
            QString cleanLine = line.simplified();
            if (cleanLine.isEmpty()) continue;
            if (firstLine) { firstLine = false; continue; }

#ifdef Q_OS_WIN
            QStringList parts = cleanLine.split(" ", Qt::SkipEmptyParts);
            if (parts.size() < 3) continue;

            QString device = parts[0];
            double freeSpaceGB = parts[1].toDouble() / (1024*1024*1024);
            double totalGB = parts[2].toDouble() / (1024*1024*1024);
            double usedGB = totalGB - freeSpaceGB;
            QString volumeName = (parts.size() >= 4) ? parts[3] : "-";

            parsedRows.append({
                device,
                QString::number(totalGB, 'f', 2) + " GB",
                QString::number(usedGB, 'f', 2) + " GB",
                QString::number(freeSpaceGB, 'f', 2) + " GB",
                volumeName,
                QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss")
            });
#else
            QStringList parts = cleanLine.split(" ", Qt::SkipEmptyParts);
            if (parts.size() < 5) continue;

            parsedRows.append({
                parts[0], parts[1], parts[2], parts[3], parts[4],
                QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss")
            });
#endif
        }

        // 回到主线程批量更新 UI
        QMetaObject::invokeMethod(self, [self, parsedRows]() {
            if (!self || !self->ui || !self->ui->tableWidget_3) {
                busy = false;
                return;
            }

            auto table = self->ui->tableWidget_3;
            table->setUpdatesEnabled(false);
            table->clearContents();
            table->setRowCount(parsedRows.size());

            for (int row = 0; row < parsedRows.size(); ++row) {
                for (int col = 0; col < parsedRows[row].size(); ++col) {
                    table->setItem(row, col, new QTableWidgetItem(parsedRows[row][col]));
                }
            }

            table->setUpdatesEnabled(true);
            busy = false;
        }, Qt::QueuedConnection);
    });
}

//设置ip表

void MainWindow::initIPTableUI() {
    auto table = ui->tableWidget_2;
    table->setColumnCount(8);
    table->setHorizontalHeaderLabels({
        "IP", "Port", "Protocol", "State",
        "-", "-", "0", "Timestamp"
    });
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    table->horizontalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #2C3E50;"
        "color: white;"
        "font-weight: bold;"
        "font-size: 14px;"
        "padding: 4px;"
        "border: 1px solid #34495E;"
        "}"
        );
    table->verticalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #34495E;"
        "color: white;"
        "font-weight: bold;"
        "font-size: 12px;"
        "border: 1px solid #2C3E50;"
        "}"
        );
    table->setStyleSheet(
        "QTableWidget {"
        "color: white;"
        "gridline-color: #34495E;"
        "background-color: #1E272E;"
        "selection-background-color: #2980B9;"
        "selection-color: white;"
        "}"
        "QTableCornerButton::section {"
        "background-color: #34495E;"
        "border: 1px solid #2C3E50;"
        "}"
        );
}

// 优化后的 setIPTable
void MainWindow::setIPTable() {
    static bool busy = false;
    if (busy) return;
    busy = true;

    QPointer<MainWindow> self(this);

    QtConcurrent::run([self]() {
        if (!self) return;

        QProcess process;
        process.setProcessChannelMode(QProcess::MergedChannels);

#ifdef Q_OS_WIN
        process.start("cmd", {"/c", "netstat -n"});
#else
        process.start("sh", {"-c", "netstat -n"});
#endif

        if (!process.waitForStarted()) {
            qDebug() << "Failed to start netstat:" << process.errorString();
            QMetaObject::invokeMethod(self, [](){ busy = false; }, Qt::QueuedConnection);
            return;
        }

        process.waitForFinished();

#ifdef Q_OS_WIN
        QString output = QString::fromLocal8Bit(process.readAll());
#else
        QString output = QString::fromUtf8(process.readAll());
#endif

        QStringList lines = output.split("\n", Qt::SkipEmptyParts);
        QList<QStringList> parsedRows;

        for (const QString &line : lines) {
            if (line.contains("TCP") || line.contains("UDP")) {
                QStringList parts = line.simplified().split(" ");
                if (parts.size() < 4) continue;

                QString protocol = parts[0];
                QString localAddr = parts[1];
                QString state = (protocol == "TCP") ? parts[3] : "UDP";

                QString ip = localAddr.section(":", 0, 0);
                QString port = localAddr.section(":", 1, 1);

                parsedRows.append({
                    ip, port, protocol, state,
                    "-", "-", "0",
                    QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss")
                });
            }
        }

        // 回到主线程批量更新 UI
        QMetaObject::invokeMethod(self, [self, parsedRows]() {
            if (!self || !self->ui || !self->ui->tableWidget_2) {
                busy = false;
                return;
            }

            auto table = self->ui->tableWidget_2;
            table->setUpdatesEnabled(false); // 暂停重绘
            table->clearContents();          // 只清内容，不清表头
            table->setRowCount(parsedRows.size());

            for (int row = 0; row < parsedRows.size(); ++row) {
                for (int col = 0; col < parsedRows[row].size(); ++col) {
                    table->setItem(row, col, new QTableWidgetItem(parsedRows[row][col]));
                }
            }

            table->setUpdatesEnabled(true); // 恢复重绘
            busy = false;
        }, Qt::QueuedConnection);
    });
}

//设置图标状态
void MainWindow::initialLabel(QLabel* label, int color, int size){

    ui->label->setText("");
    QString style = QString(
                        "min-width:%1px; min-height:%1px; max-width:%1px; max-height:%1px;"
                        "border-radius:%2px; border:1px solid black; background-color:%3;"
                        ).arg(size).arg(size / 2).arg(
                            color == 0 ? "rgb(255,0,0)" : "rgb(0,255,0)"
                            );
    label->setStyleSheet(style);

}
//初始化相机
void MainWindow::initialCamera(){

    QCameraDevice device = QMediaDevices::defaultVideoInput();
    // if (!device.isNull()) {
    //     QMessageBox::warning(this, "错误", "未检测到摄像头设备！");
    //     return;
    // }



    QCamera *camera = new QCamera(device,this);
    QMediaCaptureSession *session = new QMediaCaptureSession(this);
    QVideoWidget *video = ui->cameraWidget; // UI 中的占位控件

    session->setCamera(camera);
    session->setVideoOutput(video);
    connect(camera, &QCamera::activeChanged, this, [=](bool active){
        initialLabel(ui->label, active ? 1 : 0);
    });

    camera->start();

}

//初始化表格
void MainWindow::setTableWidget(){


    ui->tableWidget->setStyleSheet(R"(
    QHeaderView::section {
        background: qlineargradient(x1:0, y1:0, x2:0, y2:1,
                                    stop:0 #A0C4FF, stop:1 #007ACC);
        color: white;
        font-weight: bold;
        font-size: 15px;
        padding: 8px;
        border-top: 1px solid #B0D0FF;
        border-bottom: 2px solid #005A9E;
        border-left: 1px solid #005A9E;
        border-right: 1px solid #005A9E;
    }
 QTableWidget {
        background-color: #1E1E2F;
        color: #D0E6FF;
        gridline-color: #2A2A3D;
        font-family: 'Segoe UI';
        font-size: 14px;
        alternate-background-color: #25253A;
        selection-background-color: #007ACC;
        selection-color: white;
    }
    QTableWidget::item {
        padding: 6px;
        border: none;
    }
)");

    FancyHeader *header = new FancyHeader(Qt::Horizontal);
    ui->tableWidget->setHorizontalHeader(header);

QPropertyAnimation *animation = new QPropertyAnimation(header, "animationProgress");
   animation->setDuration(3000);
   animation->setStartValue(0.0);
   animation->setEndValue(1.0);
   animation->setEasingCurve(QEasingCurve::OutCubic);
   animation->setLoopCount(-1); // 无限循环
   animation->start();


   ui-> tableWidget->setAlternatingRowColors(true);
   ui-> tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
   ui-> tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
   ui-> tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
ui->tableWidget->verticalHeader()->setVisible(false); // 隐藏行号

   QStringList headers = {"小区编号", "温度 (°C)", "湿度 (%RH)", "压力 (kgf)"};
  ui-> tableWidget->setColumnCount(headers.size());
  ui-> tableWidget->setHorizontalHeaderLabels(headers);

   QStringList zones = {"DEV-0001", "DEV-0002", "DEV-0003", "DEV-0004"};
   for (int i = 0; i < zones.size(); ++i) {
     ui->  tableWidget->insertRow(i);
     ui->  tableWidget->setItem(i, 0, new QTableWidgetItem(zones[i]));
     ui->  tableWidget->setItem(i, 1, new QTableWidgetItem("100"));
     ui->  tableWidget->setItem(i, 2, new QTableWidgetItem("100"));
     ui->  tableWidget->setItem(i, 3, new QTableWidgetItem("100"));
   }


}


//图表初始化
void MainWindow::initChartIfNeeded()
{
    if (chartInitialized) return;
    if ( !ui->customPlot) {
        qDebug() << "customPlot is not initialized!";
        return;
    }

//cpu使用
    ui->customPlot->addGraph();
    ui->customPlot->xAxis->setRange(0, 60);   // 显示最近 60 秒
    ui->customPlot->yAxis->setRange(0, 100);  // CPU/内存百分比
    ui->customPlot->xAxis->setTickLabelColor(Qt::darkCyan);
    ui->customPlot->yAxis->setTickLabelColor(Qt::darkCyan);


    ui->customPlot->graph(0)->setPen(QPen(Qt::darkCyan, 2));
    ui->customPlot->graph(0)->setName("CPU 使用率");
    ui->customPlot->legend->setVisible(true);
    ui->customPlot->xAxis->setLabel("时间（秒）");
    ui->customPlot->yAxis->setLabel("使用率（%）");
    ui->customPlot->xAxis->setLabelColor(Qt::darkCyan);
    ui->customPlot->yAxis->setLabelColor(Qt::darkCyan);
    QFont labelFont;
    labelFont.setPointSize(12);       // 设置字体大小
    labelFont.setBold(true);          // 加粗
    labelFont.setFamily("Microsoft YaHei"); // 可选字体族

    ui->customPlot->xAxis->setLabelFont(labelFont);
    ui->customPlot->yAxis->setLabelFont(labelFont);
    QLinearGradient bg(0, 0, 0, ui->customPlot->height());
    bg.setColorAt(0, QColor("#2A2A3D"));
    bg.setColorAt(1, QColor("#1E1E2F"));
    ui->customPlot->setBackground(bg);

//内存使用

    ui->customPlot->addGraph();
    ui->customPlot->graph(1)->setPen(QPen(Qt::green,2));
 ui->customPlot->graph(1)->setName("内存 使用率");
    chartInitialized = true;
}
double getCpuUsage() {
    CpuMonitor monitor;
    // 在定时器中调用
 return   monitor.getCpuUsage();

}

double getMemoryUsage() {
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfo);
    DWORDLONG total = memInfo.ullTotalPhys;
    DWORDLONG used = total - memInfo.ullAvailPhys;
    return (double)used / total * 100;
}





MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow:: ConnectPLC(){

    try{
        QString input = ui->lineEdit->text();  // 获取输入内容
        QStringList parts = input.split(',');

        if (parts.size() != 3) {
            QMessageBox::question(this,
                                  tr("quit"),
                                  tr("Wrong Format "),
                                  QMessageBox::No);
            qDebug() << "输入格式错误，应为：DB号,起始地址,长度";
            return;
        }


        bool  ok2, ok3;
        QByteArray ip   = parts[0].toLatin1();
        int rack  = parts[1].toInt(&ok2);
        int slot = parts[2].toInt(&ok3);

        QHostAddress addr;
        bool ok = addr.setAddress(QString::fromLatin1(ip));
        if (ok) {
            appendColoredText(ui->textBrowser, "LEGAL IP", Qt::green);
        } else {
            appendColoredText(ui->textBrowser, "ILLEGAL IP", Qt::red);
            return;
        }


        if ( !ok2 || !ok3) {
            QMessageBox::question(this,
                                  tr("quit"),
                                  tr("illegal number "),
                                  QMessageBox::No);
         appendColoredText(ui->textBrowser, "Illegal Number", Qt::red);
            return;
        }

        if (nullptr == client) {

            client = new TS7Client();
        }


        QtConcurrent::run([=](){
            int result = client->ConnectTo(ip.data(), rack, slot);
            QMetaObject::invokeMethod(this, [=](){

                appendColoredText(ui->textBrowser, result == 0 ? "Connection Success" : "Connection failed", result == 0 ? Qt::green :Qt::red);

            }, Qt::QueuedConnection);
        });

    }
    catch (std::exception e){
        appendColoredText(ui->textBrowser,e.what(), Qt::red);
    }

}

void MainWindow::on_pushButton_clicked()
{
    ConnectPLC();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    int ret = QMessageBox::question(this,
                                    tr("quit"),
                                    tr("quit confirmation？"),
                                    QMessageBox::Yes | QMessageBox::No,
                                    QMessageBox::No);

    if (ret == QMessageBox::Yes) {
        if(client){
            delete client;
            client=nullptr;
        }
           timer->stop();

       event->accept(); // 接受关闭事件，窗口会关闭
         //  this->deleteLater();
    } else {
        if(client){
            delete client;
            client=nullptr;
        }
        event->ignore();  // 忽略关闭事件，窗口不会关闭
    }
}



void MainWindow::on_pushButton_2_clicked()
{
    if(client&&client->Connected()){

        QString input = ui->lineEdit_2->text();  // 获取输入内容
        QStringList parts = input.split(',');

        if (parts.size() != 3) {
            QMessageBox::question(this,
                                  tr("quit"),
                                  tr("Wrong Format "),
                                  QMessageBox::No);
            qDebug() << "输入格式错误，应为：DB号,起始地址,长度";
            return;
        }

        bool ok1, ok2, ok3;
        int dbNumber   = parts[0].toInt(&ok1);
        int startAddr  = parts[1].toInt(&ok2);
        int readLength = parts[2].toInt(&ok3);

        if (!ok1 || !ok2 || !ok3) {
            QMessageBox::question(this,
                                  tr("quit"),
                                  tr("illegal number "),
                                  QMessageBox::No);
            qDebug() << "输入包含非法数字";
            return;
        }

        QByteArray buffer(readLength, 0);
        int result = client->ReadArea(S7AreaDB, dbNumber, startAddr, readLength, S7WLByte, buffer.data());

        if (result == 0) {

            QString asciiStr;
            for (char byte : buffer) {
                if (byte >= 32 && byte <= 126) // 可打印字符范围
                    asciiStr += byte;
                else
                    asciiStr += '.';
            }

            appendColoredText(ui->textBrowser, "ASCII：" + asciiStr, Qt::green);
        } else {
            appendColoredText(ui->textBrowser, "读取失败", Qt::red);
        }


    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if(client&&client->Connected()){

        QString input = ui->lineEdit_3->text();  // 获取输入内容
        QStringList parts = input.split(',');

        if (parts.size() != 3) {
            QMessageBox::question(this,
                                  tr("quit"),
                                  tr("Wrong Format "),
                                  QMessageBox::No);
            qDebug() << "输入格式错误，应为：DB号,起始地址,长度";
            return;
        }

        bool ok1, ok2;
        int dbNumber   = parts[0].toInt(&ok1);
        int startAddr  = parts[1].toInt(&ok2);


        if (!ok1 || !ok2 ) {
            QMessageBox::question(this,
                                  tr("quit"),
                                  tr("illegal number "),
                                  QMessageBox::No);
            qDebug() << "输入包含非法数字";
            return;
        }

        QString text = ui->lineEdit_4->text();
        QByteArray byteArray = text.toLatin1();

        int maxLen = 20;  // 与 PLC 中 ARRAY[1..20] 对应
        int actualLen = qMin(byteArray.size(), maxLen);

        QByteArray plcArray(maxLen, 0);  // 清空，避免残留字符
        memcpy(plcArray.data(), byteArray.data(), actualLen);

        int result = client->WriteArea(S7AreaDB, dbNumber, startAddr,actualLen, S7WLByte, plcArray.data());



        if (result == 0) {
            appendColoredText(ui->textBrowser,"写入成功", Qt::green);
        } else {
            appendColoredText(ui->textBrowser,"写入失败", Qt::red);
        }



    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if(client&&client->Connected()){
        client->Disconnect();
    }
}

void MainWindow::appendColoredText(QTextBrowser* browser, const QString& text, const QColor& color) {
    QString html = QString("<span style=\"color:%1;\">%2</span>")
    .arg(color.name(), text.toHtmlEscaped());
    browser->append(html);
}


void MainWindow::Init(){

    QVariantMap config = UniversalDbManager::loadDbConfig("config.ini");

    if (config["enabled"].toBool()) {
        UniversalDbManager::DbType dbType;
        QString type = config["type"].toString().toLower();
        if (type == "mysql") dbType = UniversalDbManager::DbType::MySQL;
        else if (type == "sqlite") dbType = UniversalDbManager::DbType::SQLite;
        else if (type == "sqlserver") dbType = UniversalDbManager::DbType::SQLServer;
        else {
            qWarning() << "Unsupported database type:" << type;
            return;
        }

        UniversalDbManager db(dbType);
        if (db.connect(config)) {
            qDebug() << "Database connected.";
            // 执行查询或写入操作
        } else {
            qWarning() << "Failed to connect to database.";
        }
    } else {
        qDebug() << "Database is disabled in config.";
    }
}


void MainWindow::updateSystemStats() {
    QPointer<MainWindow> self(this); // 现在在成员函数体内

    QtConcurrent::run([self]() {
        double cpu = getCpuUsage();
        double mem = getMemoryUsage();


        if (!self) return;

        QMetaObject::invokeMethod(self, [self, cpu,mem]() {
            if (!self || !self->ui || !self->ui->customPlot) return;

            self->xData.append(self->timeCounter++);
            self->yData.append(cpu);
            self->memData.append(mem);


            if (self->xData.size() > 60) {
                self->xData.remove(0);
                self->yData.remove(0);
                self->memData.remove(0);

            }

            if (!self->chartInitialized || self->ui->customPlot->graphCount() == 0) {
                qDebug() << "Chart not ready, skipping update.";
                return;
            }

            self->ui->customPlot->graph(0)->setData(self->xData, self->yData);
             self->ui->customPlot->graph(1)->setData(self->xData, self->memData);   // 内存
            self->ui->customPlot->xAxis->setRange(self->timeCounter - 60, self->timeCounter);
            QMetaObject::invokeMethod(self->ui->customPlot, "replot", Qt::QueuedConnection);
        });
    });
}





FancyHeader::FancyHeader(Qt::Orientation orientation, QWidget *parent)
    : QHeaderView(orientation, parent) {}

void FancyHeader::paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const {
    painter->save();

    QLinearGradient gradient(rect.topLeft(), rect.bottomLeft());
    gradient.setColorAt(0, QColor("#A0C4FF"));
    gradient.setColorAt(1, QColor("#007ACC"));
    painter->fillRect(rect, gradient);

    QString text = model()->headerData(logicalIndex, Qt::Horizontal).toString();
    painter->setPen(Qt::white);
    painter->drawText(rect.adjusted(10, 0, -10, 0), Qt::AlignCenter, text);

    int segmentWidth = 10;
    for (int x = rect.left(); x < rect.right(); x += segmentWidth * 2) {
        QRect highlightLine(x, rect.bottom() - 2, segmentWidth, 1);
        QRect shadowLine(x + segmentWidth, rect.bottom() - 1, segmentWidth, 1);
        painter->fillRect(highlightLine, QColor("#B0D0FF"));
        painter->fillRect(shadowLine, QColor("#003F6B"));
    }

    QIcon icon = qvariant_cast<QIcon>(model()->headerData(logicalIndex, Qt::Horizontal, Qt::DecorationRole));
    icon.paint(painter, QRect(rect.left() + 5, rect.top() + 5, 20, 20));

    //画线
    QPainterPath path;
    path.moveTo(rect.left(), rect.bottom() - 5);
    path.lineTo(rect.left() + rect.width() * m_progress, rect.bottom() - 5);
    painter->setPen(QPen(Qt::blue, 2));
    painter->drawPath(path);


    painter->restore();
}
void FancyHeader::setAnimationProgress(qreal progress) {
    m_progress = progress;
    update(); // 触发重绘
}



void MainWindow::on_pushButton_5_clicked()
{
    saveParams();
}


void MainWindow::on_pushButton_6_clicked()
{
    initialParamTableUI();
}


void MainWindow::on_pushButton_9_clicked()
{
    QString name=ui->lineEdit_5->text();
    QVariantMap qv=  UniversalDbManager::loadDbConfig("config.ini");
    UniversalDbManager &obj=  UniversalDbManager::instance();


    QSqlQuery query=   obj.query("SELECT id, name, password,roles FROM Users where name like :name",{{":name","%" + name + "%"}});
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(query);

    if (model->lastError().isValid()) {
        qDebug() << "查询错误:" << model->lastError().text();
    } else {
        int rows = model->rowCount();
        if (rows > 0) {
            qDebug() << "查询到" << rows << "条数据";
        } else {
            qDebug() << "没有查到数据";
        }
    }
    ui->tableView->setModel(model);

}


void MainWindow::on_pushButton_8_clicked()
{
    Tools t;
    t.Export(ui->tableView);
}


void MainWindow::on_pushButton_7_clicked()
{




    Tools t;
    t.Import(true,ui->tableView,"Users");
}

