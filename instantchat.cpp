#include "instantchat.h"
#include "ui_instantchat.h"

InstantChat::InstantChat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstantChat),
    compteur(0)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
}

InstantChat::~InstantChat()
{
    delete ui;
}

void InstantChat::on_pushButton_connexion_clicked()
{
    if(socket->state()==QAbstractSocket::ConnectedState)
    {
        socket->disconnectFromHost();
        ui->listWidget_etat_connexion->addItem("Déconnexion du serveur");
        ui->pushButton_connexion->setText("Connexion");
        ui->pushButton_connexion->setDisabled(false);

    }else{
            {
                QString add;
                add = ui->lineEdit_add_serv->text();
                quint16 port = ui->lineEdit_port_serv->text().toUInt();
                socket->connectToHost(add,port);
            }
        }
}
