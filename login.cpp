#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login),obj(UniversalDbManager::instance())

{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);
    initialCombobox();
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    this->close();
}
void Login::initialCombobox(){


    QVariantMap qv=  UniversalDbManager::loadDbConfig("config.ini");
    obj.connect(qv);


    QSqlQuery query=   obj.query("SELECT id, name, password,roles FROM Users ",{{}});
    if (!query.isActive()) {
        qDebug() << "Query failed:" << query.lastError().text();
    }
    while (query.next()) {
        QString username = query.value("name").toString();
        int userId = query.value("id").toInt();

        // 添加到 ComboBox，显示用户名，绑定用户ID
        ui->comboBox->addItem(username, userId);
    }




}

void Login::on_pushButton_clicked()
{
    ui->pushButton->setEnabled(false);  // 禁用按钮

    int selectedUserId = ui->comboBox->currentData().toInt();
    QString pass=ui->lineEdit_2->text();
    QSqlQuery query=   obj.query("SELECT id, name, password,roles FROM Users where id = :id and password = :password ",{{":id",selectedUserId},{":password",pass}});
    if(query.next()){


        MainWindow *w=new MainWindow(ui->comboBox->currentText());
        this->close();
        w->setAttribute(Qt::WA_DeleteOnClose);
        w->show();



    }
    else{
         ui->pushButton->setEnabled(true);
    }
}

