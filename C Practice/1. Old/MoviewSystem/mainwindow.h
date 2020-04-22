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
    MovieType=2,         //电影类型
    ArceType=1,          //区域类型
    LangugeType=0        //语言类型
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

    //接受电影信息显示到主界面的函数
    void recvListItemSingnal(QListWidgetItem *item);

    //接受主界面checkbox控件被勾选的信号
    void recvCheckBoxSingnal(int status);

    void recvCheckBoxPageChange(int page_type);

protected:

    //主窗口的一些初始化操作
    void Init();

    //创建主界面右边的电影列表
    void CreateListWidgetItem(const ListNode<movie_info_t>* list_movie);

    //初始化信号与槽链接
    void ConnectSingnal();

    //格式化电影信息到主界面
    void FormotMovieInfoToTextEdit(const movie_info_t& info);
private slots:

    //确定按钮
    void on_pushButton_ok_clicked();

    //搜索按钮实现
    void on_pushButton_search_clicked();

    //按点击排名实现
    void on_pushButton_chick_clicked();

    void on_pushButton_date_clicked();

private:
    MovieSystem sys;
    Ui::MainWindow *ui;
    List<std::string>  list_check_box_type_; //筛选的电影类型
    List<std::string>  list_check_box_lang_; //筛选的语言类型
    List<std::string>  list_check_box_arce_; //筛选的地区
    QSet<QString>      set_id_;                  //筛选后需要展示的电影ID
    choic_type         choice_type_;                 //此刻界面筛选页面停留
};

#endif // MAINWINDOW_H
