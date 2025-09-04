#ifndef UNIVERSALDBMANAGER_H
#define UNIVERSALDBMANAGER_H
#include <QObject>          // 如果你的类继承自 QObject
#include <QString>          // 字符串处理
#include <QVariant>         // 通用数据类型，用于参数传递
#include <QVariantMap>      // 用于传递绑定参数

#include <QtSql/QSqlDatabase>   // 数据库连接管理
#include <QtSql/QSqlQuery>      // 执行 SQL 语句
#include <QtSql/QSqlError>      // 错误处理
#include <QtSql/QSqlRecord>     // 查询结果字段信息

class UniversalDbManager
{
public:
    enum class DbType { SQLite, MySQL, SQLServer };

    UniversalDbManager(DbType type, const QString& connName = "default");
    ~UniversalDbManager();

    bool connect(const QVariantMap& params); // 参数根据数据库类型解析
    bool execute(const QString& sql, const QVariantMap& bindValues = {});
    QSqlQuery query(const QString& sql, const QVariantMap& bindValues = {});
    void close();

   static QVariantMap loadDbConfig(const QString& path);


    static UniversalDbManager& instance(DbType type = DbType::SQLite) {
        static UniversalDbManager inst(type, "global_connection");
        return inst;
    }
  QSqlDatabase  database() const;




private:
    DbType dbType_;
    QString connName_;
    QSqlDatabase db_;



};

#endif // UNIVERSALDBMANAGER_H
