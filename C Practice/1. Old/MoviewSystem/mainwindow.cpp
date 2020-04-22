#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	Init();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::recvListItemSingnal(QListWidgetItem *item)
{
	QString movie_name = item->text();
	movie_info_t& info = sys.FindMovie(movie_name.toLocal8Bit().data());
	info.chick_++;
	FormotMovieInfoToTextEdit(info);
}


//每当界面一个checkBox被选中 这里就收到此box的名字并加入链表
void MainWindow::recvCheckBoxSingnal(int status)
{
	QCheckBox* item = dynamic_cast<QCheckBox*>(this->sender());
	std::string txt = item->text().toLocal8Bit().data();
	switch (choice_type_) {
	case choic_type::ArceType:
		if (status == Qt::Checked)
			list_check_box_arce_.pushBack(txt);
		else if (status == Qt::Unchecked) {
			ListNode<std::string>* head = list_check_box_arce_.getBegin();
			while (head) {
				if (head->data_ == txt) {
					list_check_box_arce_.delteNode(head);
					return;
				}
				head = head->next_;
			}
		}
		break;
	case choic_type::LangugeType:
		if (status == Qt::Checked)
			list_check_box_lang_.pushBack(txt);
		else if (status == Qt::Unchecked) {
			ListNode<std::string>* head = list_check_box_lang_.getBegin();
			while (head) {
				if (head->data_ == txt) {
					list_check_box_lang_.delteNode(head);
					return;
				}
				head = head->next_;
			}
		}
		break;
	case choic_type::MovieType:
		if (status == Qt::Checked)
			list_check_box_type_.pushBack(txt);
		else if (status == Qt::Unchecked) {
			ListNode<std::string>* head = list_check_box_type_.getBegin();
			while (head) {
				if (head->data_ == txt) {
					list_check_box_type_.delteNode(head);
					return;
				}
				head = head->next_;
			}
		}
		break;
	default:
		break;
	}
}

void MainWindow::recvCheckBoxPageChange(int page_type)
{
	choice_type_ = (choic_type)page_type;
}


void MainWindow::Init()
{
	//调整主界面初始大小
	this->resize(800, 600);
	choice_type_ = choic_type::LangugeType;

	//设置评论框显示控件只能看不能手动编辑
	this->ui->textEdit_commond_list->setReadOnly(true);

	//设置信息框控件只能看不能手动编辑
	this->ui->textEdit_movie_info->setReadOnly(true);

	//初始化电影信息到内存
	if (!sys.Init("C:/Users/Abirmoy/Documents/C lang/MoviewSystem/data.txt")) {

		//中文不用 QStringLiteral()会出现乱码;
		ui->textEdit_movie_info->setText(QStringLiteral("载入数据文件出错!"));
		return;
	}

	//链接所有信号槽
	ConnectSingnal();


	//创建主窗左边的列表
	CreateListWidgetItem(sys.GetMovieList().getBegin());
}


//创建主界面左边的电影显示链表
void MainWindow::CreateListWidgetItem(const  ListNode<movie_info_t>* head)
{
	while (head) {
		QListWidgetItem* item = new QListWidgetItem(ui->listWidget_movie_list);
		QString test(QString::fromLocal8Bit(head->data_.list_mov_name_.getBegin()->data_.c_str()));
		item->setText(test.toUtf8());
		head = head->next_;
	}
}


//链表信号与槽
void MainWindow::ConnectSingnal()
{
	connect(ui->listWidget_movie_list, &QListWidget::itemClicked, this, &MainWindow::recvListItemSingnal);
	connect(ui->tabWidget, &QTabWidget::currentChanged, this, &MainWindow::recvCheckBoxPageChange);
	connect(ui->checkBox_, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_2, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_3, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_4, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_5, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_6, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_7, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_15, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_16, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_17, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_18, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_19, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_20, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_21, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_22, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_23, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_24, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_25, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_26, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_27, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_28, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_29, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_30, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_31, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_32, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_33, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_34, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_35, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_36, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_37, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_38, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_39, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_40, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_41, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_42, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_43, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_44, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_45, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_46, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_47, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);
	connect(ui->checkBox_48, &QCheckBox::stateChanged, this, &MainWindow::recvCheckBoxSingnal);

}


void MainWindow::FormotMovieInfoToTextEdit(const movie_info_t &info)
{
	if (info.id_.empty()) {
		ui->textEdit_movie_info->setText(QStringLiteral("没有找到此影片信息"));
		return;
	}
	//导演
	ListNode<std::string>* head = info.list_dirc_.getBegin();
	QString str_dirc;
	while (head) {
		str_dirc.append(QString::fromLocal8Bit(head->data_.c_str())).append("|");
		head = head->next_;
	}

	//主演
	head = info.list_starring_.getBegin();
	QString strr_str;
	while (head) {
		strr_str.append(QString::fromLocal8Bit(head->data_.c_str())).append("|");
		head = head->next_;
	}

	//影片类型
	QString str_type;
	head = info.list_type_.getBegin();
	while (head) {
		str_type.append(QString::fromLocal8Bit(head->data_.c_str())).append("|");
		head = head->next_;
	}

	//地区
	QString str_arce;
	head = info.list_area_.getBegin();
	while (head) {
		str_arce.append(QString::fromLocal8Bit(head->data_.c_str())) + " ";
		head = head->next_;
	}

	//语言
	QString str_lang;
	head = info.list_languge_type_.getBegin();
	while (head) {
		str_lang.append(QString::fromLocal8Bit(head->data_.c_str())) + "|";
		head = head->next_;
	}

	QString data = QString(QStringLiteral("电影名:%1\n"
		"导演:%2\n"
		"编剧:%3\n"
		"主演:%4\n"
		"类型:%5\n"
		"地区:%6\n"
		"语言:%7\n"
		"上映日期:%8\n"
		"评分:%9\n"))
		.arg(QString::fromLocal8Bit(info.list_mov_name_.getBegin()->data_.c_str()))
		.arg(str_dirc)
		.arg(QString::fromLocal8Bit(info.screenwriter_.c_str()))
		.arg(strr_str)
		.arg(str_type)
		.arg(str_arce)
		.arg(str_lang)
		.arg(info.date_.c_str())
		.arg(info.score_);
	ui->textEdit_movie_info->setText(data);
}

//主界面确定按钮对应的相应函数
void MainWindow::on_pushButton_ok_clicked()
{
	if (!list_check_box_type_.getBegin() &&
		!list_check_box_arce_.getBegin() &&
		!list_check_box_lang_.getBegin()) {
		ui->textEdit_movie_info->setText(QStringLiteral("没有选中的类型!"));
		return;
	}
	const List<movie_info_t>& movie_list = sys.GetMovieList();
	if (!movie_list.getBegin()) {
		ui->textEdit_movie_info->setText(QStringLiteral("影片库没有影片!"));
		return;
	}

	//地区链表
	ListNode<std::string>* check_head = list_check_box_arce_.getBegin();
	while (check_head) {
		const ListNode<movie_info_t>* movie_node = movie_list.getBegin();
		while (movie_node) {
			const ListNode<std::string>* arc_node = movie_node->data_.list_area_.getBegin();
			while (arc_node) {
				if (arc_node->data_ == check_head->data_) {
					set_id_.insert(QString::fromLocal8Bit(movie_node->data_.id_.c_str()));
					goto next_movie;
				}
				arc_node = arc_node->next_;
			}
		next_movie:
			movie_node = movie_node->next_;
		}

		check_head = check_head->next_;
	}

	//类型链表
	check_head = list_check_box_type_.getBegin();
	while (check_head) {
		const ListNode<movie_info_t>* movie_node = movie_list.getBegin();
		while (movie_node) {
			const ListNode<std::string>* arc_node = movie_node->data_.list_type_.getBegin();
			while (arc_node) {
				if (arc_node->data_ == check_head->data_) {
					set_id_.insert(QString::fromLocal8Bit(movie_node->data_.id_.c_str()));
					goto next_movie1;
				}
				arc_node = arc_node->next_;
			}
		next_movie1:
			movie_node = movie_node->next_;
		}
		check_head = check_head->next_;
	}

	//语言链表
	check_head = list_check_box_lang_.getBegin();
	while (check_head) {
		const ListNode<movie_info_t>* movie_node = movie_list.getBegin();
		while (movie_node) {
			const ListNode<std::string>* arc_node = movie_node->data_.list_languge_type_.getBegin();
			while (arc_node) {
				if (arc_node->data_ == check_head->data_) {
					set_id_.insert(QString::fromLocal8Bit(movie_node->data_.id_.c_str()));
					goto next_movie2;
				}
				arc_node = arc_node->next_;
			}
		next_movie2:
			movie_node = movie_node->next_;
		}
		check_head = check_head->next_;
	}
	//先清空左侧列表
	ui->listWidget_movie_list->clear();

	//便历查找出来的电影ID
	for (QSet<QString>::Iterator it = set_id_.begin(); it != set_id_.end(); ++it) {

		const movie_info_t& info = sys.FindMovie(std::string((*it).toLocal8Bit().data()), FindType::MovieID);
		if (info.id_.empty())continue;
		QListWidgetItem* item = new QListWidgetItem(ui->listWidget_movie_list);
		item->setText(QString::fromLocal8Bit(info.list_mov_name_.getBegin()->data_.c_str()));

	}

	set_id_.clear();

}

//点击搜索按钮后作出的相应返回
void MainWindow::on_pushButton_search_clicked()
{
	std::string name = ui->lineEdit_search->text().toLocal8Bit().data();
	if (name.empty()) {
		ui->listWidget_movie_list->clear();
		CreateListWidgetItem(sys.GetMovieList().getBegin());
		return;
	}
	movie_info_t& info = sys.FindMovie(name);
	if (info.id_.empty()) {
		ui->textEdit_movie_info->setText(QStringLiteral("没有找到此影片信息!"));
		return;
	}
	else {
		ui->listWidget_movie_list->clear();
		ui->textEdit_movie_info->clear();


		QListWidgetItem* item = new QListWidgetItem(ui->listWidget_movie_list);
		QString test(QString::fromLocal8Bit(info.list_mov_name_.getBegin()->data_.c_str()));
		item->setText(test.toUtf8());
		ui->listWidget_movie_list->addItem(item);
	}

}

//按点击排名实现
void MainWindow::on_pushButton_chick_clicked()
{
	PriorityQueue<movie_info_t> movie_name_que(Short::More);
	List<std::string> movie_name_list;
	//获取左右所有电影的名字
	for (int i = 0; i<ui->listWidget_movie_list->count(); ++i) {
		movie_name_list.pushBack(std::string(ui->listWidget_movie_list->item(i)->text().toLocal8Bit().data()));
	}

	ListNode<movie_info_t>* head = sys.GetMovieList().getBegin();
	ListNode<std::string>* name_head = movie_name_list.getBegin();
	while (name_head) {
		while (head) {
			if (head->data_.list_mov_name_.getBegin()->data_ == name_head->data_) {
				movie_name_que.Insert(head->data_);
				goto next_name;
			}
			head = head->next_;
		}
	next_name:
		name_head = name_head->next_;
	}
	//清空左边不列表
	ui->listWidget_movie_list->clear();

	//因为是降序的所以从最后取数据
	while (1) {
		QueueNode<movie_info_t>* que_head = movie_name_que.GetTitail();
		if (!que_head)break;
		QListWidgetItem* itm = new QListWidgetItem(ui->listWidget_movie_list);
		itm->setText(QString::fromLocal8Bit(que_head->data_.list_mov_name_.getBegin()->data_.c_str()));
		movie_name_que.Erase(que_head->data_);
	}
}

//按上映日期排名实现
void MainWindow::on_pushButton_date_clicked()
{
	PriorityQueue<movie_info_t> movie_name_que;
	List<std::string> movie_name_list;
	//获取左右所有电影的名字
	for (int i = 0; i<ui->listWidget_movie_list->count(); ++i) {
		movie_name_list.pushBack(std::string(ui->listWidget_movie_list->item(i)->text().toLocal8Bit().data()));
	}
	ListNode<movie_info_t>* head = sys.GetMovieList().getBegin();
	ListNode<std::string>* name_head = movie_name_list.getBegin();
	while (name_head) {
		while (head) {
			if (head->data_.list_mov_name_.getBegin()->data_ == name_head->data_) {
				movie_name_que.Insert(head->data_);
				goto next_name;
			}
			head = head->next_;
		}
	next_name:
		name_head = name_head->next_;
	}
	//清空左边不列表
	ui->listWidget_movie_list->clear();
	QueueNode<movie_info_t>* que_head = movie_name_que.GetFront();
	while (que_head) {
		QListWidgetItem* itm = new QListWidgetItem(ui->listWidget_movie_list);
		itm->setText(QString::fromLocal8Bit(que_head->data_.list_mov_name_.getBegin()->data_.c_str()));
		que_head = que_head->next_;
	}

}
