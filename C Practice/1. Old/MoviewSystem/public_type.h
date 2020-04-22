#ifndef __PUBLIC_TYPE__
#define __PUBLIC_TYPE__
#include <iostream>
#include <string>
#include "list.hpp"
#define ARY_LEN 10
#define STR_16  16
#define STR_32  32
#define STR_64  64
#define STR_128 128

enum class MoviewType{
    Love = 0x000001,         //����Ƭ
    War = Love << 1,     //ս��
    History = War << 1,     //��ʷ
    Drama = History << 1,     //����
    Biography = Drama << 1,     //����
    Animation = Biography << 1,     //����
    Science = Animation << 1,     //�ƻ�
    Adventure = Science << 1,     //ð��
    Comedy = Adventure << 1,     //ϲ��
    Fantasy = Comedy << 1,     //���
    Suspense = Fantasy << 1,     //����
    Horror = Suspense << 1,     //�ֲ�
    Crime = Horror << 1,     //����
    Art = Crime << 1,     //����|����
    KongFu = Art << 1,     //����|����
    Costume = KongFu << 1,     //��װ
    Disaster = Costume << 1      //����
};
enum class LangugeType{
    Chinese = 0x000001,         //����
    Englisth = Chinese << 1,    //Ӣ��
    Dialect = Englisth << 1,    //����
    Cantonese = Dialect << 1,    //����
    Hindi = Cantonese << 1,    //ӡ����
    Italian = Hindi << 1,    //�������
    German = Italian << 1,    //����
    Russian = German << 1,    //����
    Polish = Russian << 1,    //������
    Hebrew = Polish << 1,    //ϣ��������
    Japanese = Hebrew << 1,    //����
    Norwegian = Japanese << 1,    //Ų����
    Swahili = Norwegian << 1,    //˹��ϣ����
    Khosa = Swahili << 1,    //������
    Zulu = Khosa << 1,    //��³��
    Thai = Zulu << 1     //̩��
};
enum class AreaType{
    CH = 0x000001,         //�й���½
    UK = CH << 1,    //Ӣ��
    USA = UK << 1,    //����
    RS = USA << 1,    //����˹
    ITA = RS << 1,    //�����
    JP = ITA << 1,    //�ձ�
    HK = JP << 1,    //�й����
    GM = HK << 1,    //�¹�
    NW = GM << 1     //Ų��
};

#define Chinese_I   0
#define Englisth_I  1
#define Dialect_I   2
#define Cantonese_I 3
#define Hindi_I     4
#define Italian_I   5
#define German_I    6
#define Russian_I   7
#define Hebrew_I    8
#define Polish_I    9
#define Japanese_I  10
#define Norwegian_I 11
#define Swahili_I   12
#define Khosa_I     13
#define Zulu_I      14
#define Thai_I      15


    static const char* lang_str[16] =
    {
        "��ͨ��",
        "Ӣ��",
        "�Ͼ���|�Ϻ���",
        "����",
        "ӡ����",
        "�������",
        "����",
        "����",
        "ϣ��������",
        "������",
        "����",
        "Ų����",
        "˹��ϣ����",
        "������",
        "��³��",
        "̩��"
    };


//������Ӱ��Ϣ
typedef struct movie_info_t{



    movie_info_t() :score_(0), chick_(0){
    };

    bool operator ==(const movie_info_t& other){
        if(this->id_==other.id_)
            return true;
        return false;

    }
    bool operator >(const movie_info_t& other){
        return this->chick_>other.chick_;
    }
    bool operator <(const movie_info_t& other) {
        return this->date_<other.date_;
    }
    movie_info_t(const movie_info_t& other) :score_(other.score_){
        chick_ = other.chick_;
        date_ = other.date_;
        list_area_ = other.list_area_;
        list_type_ = other.list_type_;
        list_languge_type_ = other.list_languge_type_;
        screenwriter_ = other.screenwriter_;
        list_starring_ = other.list_starring_;
        id_ = other.id_;
        list_dirc_ = other.list_dirc_;
        actors_ = other.actors_;
        comment_ = other.comment_;
        introduce_ = other.introduce_;
        list_mov_name_ = other.list_mov_name_;
    };




    ////////////////////////////////////////////
    std::string       date_;             //��ӡ����
    size_t            chick_;            //���
    std::string       id_;               //ΨһID
    List<std::string> list_dirc_;        //����
    std::string       screenwriter_;     //���
    List<std::string> list_mov_name_;    //��Ӱ��
    List<std::string> list_starring_;    //����
    List<std::string> list_languge_type_;//����
    List<std::string> list_area_;        //����
    List<std::string> list_type_;        //����
    List<std::string> actors_;           //��Ա�б�(��ʱ����)
    float             score_;            //����
    List<std::string> comment_;          //����(��ʱδ����)
    std::string       introduce_;        //���(��ʱδ����)
}movie_info_t, *p_moview_info_t;
#endif
