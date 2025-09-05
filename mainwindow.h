#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define NOMINMAX


#include <QMainWindow>
#include "snap7.h"
#include "./ui_mainwindow.h"
#include "universaldbmanager.h"
#include "qcustomplot.h"
#include <QtGlobal>
#include <QTime>
#include <windows.h>
#include "cpumonitor.h"
#include <QtConcurrent>
#include <QCamera>
#include <QMediaCaptureSession>
#include <QImageCapture>
#include <QMediaDevices>
#include <QVideoWidget>
#include <QMediaDevices>
#include <QSqlQueryModel>
#include "tools.h"




QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

private:
    bool chartInitialized;
    bool ipTableInitialized=false;
    void initChartIfNeeded();
    QTimer *timer;
    bool isParamTableInitialized=false;

private:
    Ui::MainWindow *ui;

    TS7Client *client ;

    void ConnectPLC();

    void closeEvent(QCloseEvent *event);

    void appendColoredText(QTextBrowser* browser, const QString& text, const QColor& color);

    void Init();

    void updateSystemStats();

    void setTableWidget();

    QVector<double> xData, yData;
    int timeCounter = 0;
    QVector<double> memData; // 内存使用率数据
    void initialCamera();
    void initialLabel(QLabel* label, int color, int size = 12);

    void setIPTable();
    void setDiskTable();
void initIPTableUI();
    void initDiskTableUI();
void initialParamTableUI();
    void saveParams();
void showUsers();




};
#endif// MAINWINDOW_H
class Test{
public:Test();
    ~Test();



};

#ifndef FANCYHEADER_H
#define FANCYHEADER_H
#include <QHeaderView>
#include <QPainter>
#include <QPainterPath>
#include <QLinearGradient>
#include <QIcon>
class FancyHeader : public QHeaderView {

    Q_OBJECT
    Q_PROPERTY(qreal animationProgress READ animationProgress WRITE setAnimationProgress)
public:
    FancyHeader(Qt::Orientation orientation, QWidget *parent = nullptr);
    qreal animationProgress() const { return m_progress; }
    void setAnimationProgress(qreal progress); // 0.0 ~ 1.0

protected:
    void paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const override;

private:
    qreal m_progress = 0.0; // 动画进度
};
#endif
