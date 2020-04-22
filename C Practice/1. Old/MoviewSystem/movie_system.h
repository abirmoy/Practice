#ifndef __MOVE_SYSTEM__
#define __MOVE_SYSTEM__
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "public_type.h"
enum class FindType{
    MovieName,  //名字查找
    MovieID     //ID查找
};
class MovieSystem{
public:
	MovieSystem(){};
	~MovieSystem(){};

	//初始化函数 载入数据
	bool         Init(const std::string& data_path);

	//获取电影列表
    inline const List<movie_info_t>& GetMovieList(){ return list_movie_; }

	//增加评论(暂未用上)
	void         AppendComment(const std::string& moview_id, const std::string& data);

    movie_info_t& FindMovie(const std::string& movie_name,FindType type=FindType::MovieName);

    //指定电影点击+1
    void ChickAddOne(const std::string& movie_id);
protected:

	//解析数据文件
	void         ParseMovieFile(const std::string& path);

	//名字解析
	void         ParseName(const std::string&, List<std::string>&);

	//电影ID解析 
	std::string  ParseID(const std::string&);

	//分数解析
	float        ParseScore(const std::string&);
private:
	List<movie_info_t> list_movie_;
	List<std::string>  list_lang_type_;

};
#endif
