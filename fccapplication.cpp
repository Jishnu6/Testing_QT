#include "fccapplication.h"
#include "ui_fccapplication.h"
#include<QHostAddress>

#include <QMessageBox>
#include <QString>

//nothin happend

FCCApplication::FCCApplication(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FCCApplication)
{
    ui->setupUi(this);
    QVector<QString> children;
    children.append("SBC card");
    children.append("Graphics card");
    children.append("IO1 card");
    children.append("IO2 card");
    createParent("BIT" , ui->treeWidget,"D:/Projects/FCCApplication/o.png",children);

    children.clear();


    children.append("SBC card");
    children.append("Graphics card");
    children.append("IO1 card");
    children.append("IO2 card");
    createParent("Temperature" , ui->treeWidget,"D:/Projects/FCCApplication/o.png",children);
    children.clear();


    children.append("COM 1");
    children.append("COM 2");
    createParent("RS232" , ui->treeWidget,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("COM 3");
    children.append("COM 4");
    createParent("RS422" , ui->treeWidget,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("Connection 1");
    children.append("Connection 2");
    createParent("Ethernet" , ui->treeWidget,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("IN");
    children.append("OUT");
    createParent("DIO" , ui->treeWidget,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("READ");
    children.append("WRITE");
    createParent("XMC_SATA" , ui->treeWidget,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("Two");
    children.append("Four");
    children.append("Five");
    children.append("Six");
    createParent("DVI" , ui->treeWidget_2,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("Input");
    children.append("Output");
    createParent("HD SD1" , ui->treeWidget_2,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("Input");
    children.append("Output");
    createParent("HD SD2" , ui->treeWidget_2,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 1");
    children.append("CH 2");
    children.append("CH 3");
    children.append("CH 4");
    createParent("RS422" , ui->treeWidget_3,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 1");
    children.append("CH 2");
    children.append("CH 3");
    children.append("CH 4");
    children.append("CH 5");
    children.append("CH 6");
    createParent("ARNIC 429 Rx" , ui->treeWidget_3,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH1");
    createParent("ARNIC 429 Tx" , ui->treeWidget_3,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 1");
    children.append("CH 2");
    children.append("CH 3");
    children.append("CH 4");
    children.append("CH 5");
    children.append("CH 6");
    createParent("28V Open discrete input" , ui->treeWidget_3,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 1");
    children.append("CH 2");
    children.append("CH 3");
    children.append("CH 4");
    createParent("28V Open discrete output" , ui->treeWidget_3,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 1");
    children.append("CH 2");
    createParent("MIL 1553B" , ui->treeWidget_3,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 9");
    children.append("CH 10");
    children.append("CH 11");
    children.append("CH 12");
    children.append("CH 13");
    children.append("CH 14");
    children.append("CH 15");
    children.append("CH 16");
    createParent("Discrete output GND" , ui->treeWidget_3,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 1");
    children.append("CH 2");
    children.append("CH 3");
    children.append("CH 4");
    children.append("CH 5");
    children.append("CH 6");
    children.append("CH 7");
    children.append("CH 8");
    createParent("Discrete input open GND" , ui->treeWidget_4,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 1");
    children.append("CH 2");
    children.append("CH 3");
    children.append("CH 4");
    children.append("CH 5");
    children.append("CH 6");
    children.append("CH 7");
    children.append("CH 8");
    children.append("CH 9");
    children.append("CH 10");
    createParent("Discrete output open GND" , ui->treeWidget_4,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    children.append("CH 1");
    children.append("CH 2");
    children.append("CH 3");
    children.append("CH 4");
    children.append("CH 5");
    children.append("CH 6");
    createParent("MIL 1553B Analog Input" , ui->treeWidget_4,"D:/Projects/FCCApplication/o.png",children);
    children.clear();

    createParent("+5V Excitation" , ui->treeWidget_5,"D:/Projects/FCCApplication/o.png",children);
    createParent("-5V Excitation" , ui->treeWidget_5,"D:/Projects/FCCApplication/o.png",children);

    createParent("FCC Processor" , ui->treeWidget_6,"D:/Projects/FCCApplication/o.png",children);
    createParent("FCC Application" , ui->treeWidget_6,"D:/Projects/FCCApplication/o.png",children);

    connect(ui->treeWidget_2,SIGNAL(itemClicked(QTreeWidgetItem *,int)),this, SLOT(on_treeWidget_itemClicked(QTreeWidgetItem *,int)));
    connect(ui->treeWidget_3,SIGNAL(itemClicked(QTreeWidgetItem *,int)),this, SLOT(on_treeWidget_itemClicked(QTreeWidgetItem *,int)));
    connect(ui->treeWidget_4,SIGNAL(itemClicked(QTreeWidgetItem *,int)),this, SLOT(on_treeWidget_itemClicked(QTreeWidgetItem *,int)));
    connect(ui->treeWidget_6,SIGNAL(itemClicked(QTreeWidgetItem *,int)),this, SLOT(on_treeWidget_itemClicked(QTreeWidgetItem *,int)));
    connect(ui->treeWidget_5,SIGNAL(itemClicked(QTreeWidgetItem *,int)),this, SLOT(on_treeWidget_itemClicked(QTreeWidgetItem *,int)));

    socket = new QTcpSocket(this);
//    QHostAddress address;
//    address.setAddress( "192.168.137.174");
//    socket->bind(address,8080);
//    socket->setSocketOption(QAbstractSocket::KeepAliveOption, 1);

    connect(ui->connect ,SIGNAL(clicked()),this,SLOT(setConnection()));
    QByteArray byteArray;
    byteArray.append(0xAB);
    byteArray.append(0x01);

        qDebug() << "Byte value:" << byteArray.toInt();






}

FCCApplication::~FCCApplication()
{
    delete ui;
}


void FCCApplication::createParent(QString itemName, QTreeWidget *widgetName,QString icons,QVector<QString> children)
{

    QTreeWidgetItem *root  = new QTreeWidgetItem(widgetName);
    root->setText(0,itemName);
    root->setIcon(0,QIcon(icons));

    for(auto itr : children){

    QTreeWidgetItem *child = new QTreeWidgetItem();
    child->setText(0,itr);
    child->setIcon(0,QIcon(icons));
    root->addChild(child);

    }

}


void FCCApplication::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    QMessageBox msgBox;
    msgBox.setText("Is sensors are working properly");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();

    switch (ret) {
      case QMessageBox::Yes:
          item->setIcon(0,QIcon(  "D:/Projects/FCCApplication/g.png"  ));
          break;
      case QMessageBox::No:
           item->setIcon(0,QIcon(  "D:/Projects/FCCApplication/r.png"  ));
          break;
      case QMessageBox::Cancel:
           item->setIcon(0,QIcon( "D:/Projects/FCCApplication/o.png"  ));
          break;
      default:
          break;
    }
}

void FCCApplication::setConnection(){

    QPushButton *connection = ui->connect;
    QMessageBox connectionInfo;

    connection->setEnabled(false);
    if(connection->text() == "Connect"){

        socket->connectToHost("192.168.137.174",8080);
            handleConnection(connection);
    }
    else if(connection->text() == "Disconnect"){

        handleConnection(connection);

    }


}

void FCCApplication::handleConnection(QPushButton *connection){

    QString request , connectionStatus = connection->text();
    QMessageBox connectionInfo;

    if(connectionStatus == "Connect")
        request = "0x12340xAB010x00010x5678";
    else if(connectionStatus == "Disconnect")
        request = "0x12340xAB010x00000x5678";;


    socket->write(request.toUtf8());
    socket->waitForBytesWritten(3000);

    QString response = socket->readAll();

    qDebug()<<response;

    if(response == "0x06"){

        if(request == "0000") socket->close();

        QString changeStatus = (connectionStatus == "Connect")?"Disconnect":"Connect";
        connection->setText(changeStatus);
        connectionInfo.setText("Request Aproved");
        connectionInfo.exec();


    }
    else if(response == "0x15"){

        connectionInfo.setText("Request Disaproved");
        connectionInfo.exec();

    }
     connection->setEnabled(true);

}


