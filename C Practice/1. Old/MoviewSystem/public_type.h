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
    Love = 0x000001,         //爱情片
    War = Love << 1,     //战争
    History = War << 1,     //历史
    Drama = History << 1,     //剧情
    Biography = Drama << 1,     //传记
    Animation = Biography << 1,     //动画
    Science = Animation << 1,     //科幻
    Adventure = Science << 1,     //冒险
    Comedy = Adventure << 1,     //喜剧
    Fantasy = Comedy << 1,     //奇幻
    Suspense = Fantasy << 1,     //悬疑
    Horror = Suspense << 1,     //恐怖
    Crime = Horror << 1,     //犯罪
    Art = Crime << 1,     //歌舞|艺术
    KongFu = Art << 1,     //功夫|武侠
    Costume = KongFu << 1,     //古装
    Disaster = Costume << 1      //灾难
};
enum class LangugeType{
    Chinese = 0x000001,         //中文
    Englisth = Chinese << 1,    //英语
    Dialect = Englisth << 1,    //方言
    Cantonese = Dialect << 1,    //粤语
    Hindi = Cantonese << 1,    //印地语
    Italian = Hindi << 1,    //意大利语
    German = Italian << 1,    //德语
    Russian = German << 1,    //俄语
    Polish = Russian << 1,    //波兰语
    Hebrew = Polish << 1,    //希伯利亚语
    Japanese = Hebrew << 1,    //日语
    Norwegian = Japanese << 1,    //挪威语
    Swahili = Norwegian << 1,    //斯瓦希里语
    Khosa = Swahili << 1,    //科萨语
    Zulu = Khosa << 1,    //祖鲁语
    Thai = Zulu << 1     //泰语
};
enum class AreaType{
    CH = 0x000001,         //中国大陆
    UK = CH << 1,    //英国
    USA = UK << 1,    //美国
    RS = USA << 1,    //俄罗斯
    ITA = RS << 1,    //意大利
    JP = ITA << 1,    //日本
    HK = JP << 1,    //中国香港
    GM = HK << 1,    //德国
    NW = GM << 1     //挪威
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
        "普通话",
        "英语",
        "南京话|上海话",
        "粤语",
        "印地语",
        "意大利语",
        "德语",
        "俄语",
        "希伯利亚语",
        "波兰语",
        "日语",
        "挪威语",
        "斯瓦希里语",
        "科萨语",
        "祖鲁语",
        "泰语"
    };


//单部电影信息
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
    std::string       date_;             //上印日期
    size_t            chick_;            //点击
    std::string       id_;               //唯一ID
    List<std::string> list_dirc_;        //导演
    std::string       screenwriter_;     //编剧
    List<std::string> list_mov_name_;    //电影名
    List<std::string> list_starring_;    //主演
    List<std::string> list_languge_type_;//语言
    List<std::string> list_area_;        //地区
    List<std::string> list_type_;        //类型
    List<std::string> actors_;           //演员列表(暂时用上)
    float             score_;            //评分
    List<std::string> comment_;          //评语(暂时未用上)
    std::string       introduce_;        //简介(暂时未用上)
}movie_info_t, *p_moview_info_t;
#endif
