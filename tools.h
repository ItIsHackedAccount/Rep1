#ifndef TOOLS_H
#define TOOLS_H

#include <QTableView>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QStandardItem>
#include "universaldbmanager.h"
#include <QSqlTableModel>


class Tools
{
public:
    Tools();

    void Import(bool useDatabase=false,QTableView* tableView=nullptr,QString tableName=nullptr);
    void Export(QTableView* tableView);

};

#endif // TOOLS_H
