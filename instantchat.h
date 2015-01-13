#ifndef INSTANTCHAT_H
#define INSTANTCHAT_H

#include <QMainWindow>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>
#include <QMessageBox>

namespace Ui {
class InstantChat;
}

class InstantChat : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit InstantChat(QWidget *parent = 0);
    ~InstantChat();
    
private slots:
    void on_pushButton_connexion_clicked();

private:
    Ui::InstantChat *ui;
    QTcpSocket *socket;
    quint16 compteur;
};

#endif // INSTANTCHAT_H
