#include "movie_system.h"

bool MovieSystem::Init(const std::string& data_path) {
	if (data_path.empty())return false;
	ParseMovieFile(data_path);
	if (!list_movie_.getLen())return false;
	return true;
}

//增加评论
void MovieSystem::AppendComment(const std::string& moview_id, const std::string& data) {
	ListNode<movie_info_t>* head = list_movie_.getBegin();
	while (head) {
		if (head->data_.id_ == moview_id) {
			head->data_.comment_.pushBack(data);
			return;
		}
		head = head->next_;
	}
}

movie_info_t &MovieSystem::FindMovie(const std::string &movie_name, FindType type)
{
	static movie_info_t info_empt;
	if (type == FindType::MovieID)
		goto id;
	ListNode<movie_info_t>* head = list_movie_.getBegin();
	while (head) {
		if (head->data_.list_mov_name_.getBegin()->data_ == movie_name) {
			return head->data_;
		}
		head = head->next_;
	}
	return info_empt;

id:
	{
		ListNode<movie_info_t>* head = list_movie_.getBegin();
		while (head) {
			if (head->data_.id_ == movie_name) {
				return head->data_;
			}
			head = head->next_;
		}
	}
	return info_empt;
}



//解析数据文件
void MovieSystem::ParseMovieFile(const std::string& path) {
	FILE* file = fopen(path.c_str(), "r");
	if (!file)return;
	while (!feof(file)) {
		char buf[10][STR_128] = { 0 };
		movie_info_t info;
		fgets(buf[0], STR_128, file);//ID
		if (buf[0][0] == '\n')
			continue;
		info.id_ = ParseID(std::string(buf[0]));
		fgets(buf[1], STR_128, file);//影名
		ParseName(std::string(buf[1]), info.list_mov_name_);
		fgets(buf[2], STR_128, file);//导演
		ParseName(std::string(buf[2]), info.list_dirc_);
		fgets(buf[3], STR_128, file);//编剧
		List<std::string> lis;
		ParseName(std::string(buf[3]), lis);
		info.screenwriter_ = lis.getBegin()->data_;
		fgets(buf[4], STR_128, file);//主演
		ParseName(std::string(buf[4]), info.list_starring_);
		fgets(buf[5], STR_128, file);//类型
		ParseName(std::string(buf[5]), info.list_type_);
		fgets(buf[6], STR_128, file);//地区
		ParseName(std::string(buf[6]), info.list_area_);
		fgets(buf[7], STR_128, file);//语言
		ParseName(std::string(buf[7]), info.list_languge_type_);
		fgets(buf[8], STR_128, file);//日期
		List<std::string> date_s;
		ParseName(std::string(buf[8]), date_s);
		info.date_ = date_s.getBegin()->data_;
		fgets(buf[9], STR_128, file);//评分
		info.score_ = ParseScore(std::string(buf[9]));
		list_movie_.pushBack(info);
	}

}

void MovieSystem::ChickAddOne(const std::string& movie_id) {
	ListNode<movie_info_t>* head = list_movie_.getBegin();
	while (head) {
		if (head->data_.id_ == movie_id) {
			head->data_.chick_++;
			return;
		}
		head = head->next_;
	}
}
float MovieSystem::ParseScore(const std::string& line_data) {
	for (size_t i = 0; i < line_data.size(); ++i) {
		if (line_data[i] == ' ') {
			float s;
			std::string str = line_data.substr(++i, line_data.size() - i - 1);
			sscanf(str.c_str(), "%f", &s);
			return s;
		}
	}
	return 0;
}

std::string  MovieSystem::ParseID(const std::string& line_data) {
	std::string str;
	for (int i = 0; i < line_data.size(); ++i) {
		if (line_data[i] == ':')
			return line_data.substr(++i, line_data.size() - i - 1);
	}
	return str;
}


void MovieSystem::ParseName(const std::string& line_data, List<std::string>& name_list) {
	for (size_t i = 0; i < line_data.size(); ++i) {
		if (line_data[i] == ' ') {
			std::string tmp_name = line_data.substr(++i, line_data.size() - i - 1);
			int pre_pos = 0;
			for (int j = 0; j < tmp_name.size(); ++j) {
				if (tmp_name[j] == '|'&& j != 0) {
					std::string s = tmp_name.substr(pre_pos, j - pre_pos);
					if (!s.empty()) {
						pre_pos = j + 1;
						name_list.pushBack(s);
					}
				}
			}
			std::string s = tmp_name.substr(pre_pos, tmp_name.size() - pre_pos);
			if (!s.empty())
				name_list.pushBack(s);
		}
	}
}
