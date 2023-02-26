#ifndef FCCAPPLICATION_H
#define FCCAPPLICATION_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVector>
#include <QList>
#include <QObject>
#include <QTcpSocket>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class FCCApplication; }
QT_END_NAMESPACE

class FCCApplication : public QMainWindow
{
    Q_OBJECT

public:
    FCCApplication(QWidget *parent = nullptr);
    ~FCCApplication();
    void createParent(QString itemName , QTreeWidget *widgetName,QString icons,QVector<QString>child);



public slots:

    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);
    void setConnection();
    void handleConnection(QPushButton *button);


private:
    Ui::FCCApplication *ui;
    QTcpSocket *socket;

};
#endif // FCCAPPLICATION_H
