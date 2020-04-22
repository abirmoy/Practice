#ifndef __MOVE_SYSTEM__
#define __MOVE_SYSTEM__
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "public_type.h"
enum class FindType{
    MovieName,  //���ֲ���
    MovieID     //ID����
};
class MovieSystem{
public:
	MovieSystem(){};
	~MovieSystem(){};

	//��ʼ������ ��������
	bool         Init(const std::string& data_path);

	//��ȡ��Ӱ�б�
    inline const List<movie_info_t>& GetMovieList(){ return list_movie_; }

	//��������(��δ����)
	void         AppendComment(const std::string& moview_id, const std::string& data);

    movie_info_t& FindMovie(const std::string& movie_name,FindType type=FindType::MovieName);

    //ָ����Ӱ���+1
    void ChickAddOne(const std::string& movie_id);
protected:

	//���������ļ�
	void         ParseMovieFile(const std::string& path);

	//���ֽ���
	void         ParseName(const std::string&, List<std::string>&);

	//��ӰID���� 
	std::string  ParseID(const std::string&);

	//��������
	float        ParseScore(const std::string&);
private:
	List<movie_info_t> list_movie_;
	List<std::string>  list_lang_type_;

};
#endif
