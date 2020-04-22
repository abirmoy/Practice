#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextCodec>
#include <QDebug>
#include <QCheckBox>
#include <QSet>
#include <iostream>
#include <string>
#include <QListWidgetItem>
#include "list.hpp"
#include "movie_system.h"
#include "priority_queue.hpp"
enum class choic_type{
    MovieType=2,         //��Ӱ����
    ArceType=1,          //��������
    LangugeType=0        //��������
};
typedef void (GetMovieInfoHandler)(const movie_info_t& info);
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:

    //���ܵ�Ӱ��Ϣ��ʾ��������ĺ���
    void recvListItemSingnal(QListWidgetItem *item);

    //����������checkbox�ؼ�����ѡ���ź�
    void recvCheckBoxSingnal(int status);

    void recvCheckBoxPageChange(int page_type);

protected:

    //�����ڵ�һЩ��ʼ������
    void Init();

    //�����������ұߵĵ�Ӱ�б�
    void CreateListWidgetItem(const ListNode<movie_info_t>* list_movie);

    //��ʼ���ź��������
    void ConnectSingnal();

    //��ʽ����Ӱ��Ϣ��������
    void FormotMovieInfoToTextEdit(const movie_info_t& info);
private slots:

    //ȷ����ť
    void on_pushButton_ok_clicked();

    //������ťʵ��
    void on_pushButton_search_clicked();

    //���������ʵ��
    void on_pushButton_chick_clicked();

    void on_pushButton_date_clicked();

private:
    MovieSystem sys;
    Ui::MainWindow *ui;
    List<std::string>  list_check_box_type_; //ɸѡ�ĵ�Ӱ����
    List<std::string>  list_check_box_lang_; //ɸѡ����������
    List<std::string>  list_check_box_arce_; //ɸѡ�ĵ���
    QSet<QString>      set_id_;                  //ɸѡ����Ҫչʾ�ĵ�ӰID
    choic_type         choice_type_;                 //�˿̽���ɸѡҳ��ͣ��
};

#endif // MAINWINDOW_H
