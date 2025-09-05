#include "universaldbmanager.h"

UniversalDbManager::UniversalDbManager(DbType type, const QString& connName)
    : dbType_(type), connName_(connName) {}


bool UniversalDbManager::connect(const QVariantMap& params) {
    QString driver;
    switch (dbType_) {
    case DbType::SQLite:   driver = "QSQLITE"; break;
    case DbType::MySQL:    driver = "QMYSQL";  break;
    case DbType::SQLServer:driver = "QODBC";   break;
    }

    db_ = QSqlDatabase::addDatabase(driver, connName_);

    if (dbType_ == DbType::SQLite) {
        db_.setDatabaseName(params.value("dbname").toString());
    } else if (dbType_ == DbType::MySQL) {
        db_.setHostName(params.value("host").toString());
        db_.setPort(params.value("port").toInt());
        db_.setUserName(params.value("user").toString());
        db_.setPassword(params.value("password").toString());
        db_.setDatabaseName(params.value("dbname").toString());
    } else if (dbType_ == DbType::SQLServer) {
        QString dsn = params.value("dsn").toString();
        db_.setDatabaseName(dsn);
        db_.setUserName(params.value("user").toString());
        db_.setPassword(params.value("password").toString());
    }

    return db_.open();
}

bool UniversalDbManager::execute(const QString& sql, const QVariantMap& bindValues) {
    QSqlQuery query(db_);
    query.prepare(sql);
    for (auto it = bindValues.begin(); it != bindValues.end(); ++it)
        query.bindValue( it.key(), it.value());
    return query.exec();
}

QSqlQuery UniversalDbManager::query(const QString& sql, const QVariantMap& bindValues) {
    QSqlQuery query(db_);
    query.prepare(sql);
    for (auto it = bindValues.begin(); it != bindValues.end(); ++it)
        query.bindValue(it.key(), it.value());
    query.exec();
    return query;
}
void UniversalDbManager::close() {
    db_.close();
    QSqlDatabase::removeDatabase(connName_);
}

UniversalDbManager::~UniversalDbManager() {

    close();
}

QSqlDatabase UniversalDbManager::database() const {
    return db_;
}


#include <QSettings>

 QVariantMap UniversalDbManager::loadDbConfig(const QString& path) {
    QSettings settings(path, QSettings::IniFormat);
    QVariantMap config;
    settings.beginGroup("Database");
    config["enabled"] = settings.value("enabled", false).toBool();
    config["type"] = settings.value("type").toString();
    config["host"] = settings.value("host").toString();
    config["port"] = settings.value("port").toInt();
    config["user"] = settings.value("user").toString();
    config["password"] = settings.value("password").toString();
    config["dbname"] = settings.value("dbname").toString();
    settings.endGroup();
    return config;
}


