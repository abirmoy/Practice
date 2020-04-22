#pragma once
#include <iostream>
#include <string>
/*����ṹ*/
template<class DataType>
struct ListNode{

    
	ListNode<DataType>& operator=(const ListNode<DataType>& other){
		if (next_){
			delete next_;
			next_ = NULL;
		}
		if (other.next_)
			next_ = new ListNode<DataType>(other.next_->data);
		data_ = other.data_;
        return *this;
    }
    bool operator==(const ListNode<DataType>* other){
        return this == other;
    }
	bool operator==(const ListNode<DataType>& other){
        return data_ == other.data_;
	}
	
	ListNode<DataType>() :next_(NULL){}

	ListNode<DataType>(const DataType& data) :
		next_(NULL),
		data_(data){}

	DataType data_;
	ListNode<DataType>* next_;
};


template<typename DataType>
class List{
public:
	typedef ListNode<DataType>* pListNode;

	List<DataType>():list_len_(0),
	list_(NULL)
	{};

	List(const List<DataType>& other){
		ListNode<DataType>* other_head = other.getBegin();
		while (other_head){
			this->pushBack(other_head->data_);
			other_head = other_head->next_;
		}
	}
	List& operator=(const List<DataType>& other){
		if (list_)_free_list();
		ListNode<DataType>* other_head = other.getBegin();
		while (other_head){
			this->pushBack(other_head->data_);
			other_head = other_head->next_;
		}
		return *this;
	}
    void FreeList(){
        _free_list();;
    }
	
	~List(){
		_free_list();
	};

	//�������
	List<DataType>& operator+(List<DataType>& other){
		if (!other.getLen())return*this;
		list_len_ += other.list_len_;
		pListNode tail = this->getTail();
		tail->next_ = other.getBegin();
		other._remove_point();
		return *this;
	}



	//��ȡ����ͷ�ڵ�
	inline const  pListNode getBegin()const{ return list_; }

	//��ȡ����β�ڵ�
	pListNode getTail(){
		if (!list_)return NULL;
		pListNode tmp_head = list_;
		pListNode pre_node = NULL;
		while (tmp_head){
			pre_node = tmp_head;
			tmp_head = tmp_head->next_;
		}
		return pre_node;
	}

	//��ȡ������
	inline size_t    getLen()const { return list_len_; }

	void             insertNode(pListNode node, DataType data){
		if (!node)return;
		else if (!list_){
			list_ = (pListNode)malloc(sizeof(ListNode) * 1);
			list_->data_ = data;
			list_->next_ = NULL;
			list_len_++;
			return;
		}
		else {
			pListNode tmp_head = list_;
			pListNode tmp_head_pre = NULL;
			while (tmp_head){

				if (tmp_head == node){
					pListNode tmp_head_next = tmp_head->next_;
					tmp_head->next_ = new ListNode<DataType>(data);
					if (tmp_head_next)
						tmp_head->next_->next_ = tmp_head;
					else
						tmp_head->next_->next_ = NULL;
					list_len_++;
				}
				tmp_head_pre = tmp_head;
				tmp_head = tmp_head->next_;
			}
		}
	}

	//β������ڵ�
	void             pushBack(const DataType& data){
		if (!list_){
			list_ = new ListNode<DataType>(data);
			list_len_++;
			return;
		}
		pListNode head = list_;
		pListNode pre_node = NULL;
		while (head) {
			pre_node = head;
			head = head->next_;
		}
		pre_node->next_ = new ListNode<DataType>(data);
		list_len_++;
	}

	//ɾ��ָ�ڽڵ�
    void delteNode(ListNode<DataType>* node){
		if (!list_ || !node)return;
		pListNode tmp_head = list_;
		if (tmp_head == node) {
			free(tmp_head);
			list_len_--;
			list_ = NULL;
            return;
		}
		else {
			pListNode pre_node = NULL;
			while (tmp_head) {
				if (tmp_head == node) {
					pListNode tmp_head_next = NULL;
					if (tmp_head->next_) {
						tmp_head_next = tmp_head->next_;
						free(tmp_head);
						pre_node->next_ = tmp_head_next;
					}
					else {
						free(tmp_head);
						pre_node->next_ = NULL;
					}
					list_len_--;
					return;
				}
				pre_node = tmp_head;
				tmp_head = tmp_head->next_;
			}

		}
	}


protected:
	//�ڲ�ָ��ָ���
	inline void _remove_point(){
		list_ = NULL;
		list_len_ = 0;
	}

	//�ͷ�����
	void _free_list(){
		pListNode head_next = NULL;
		while (list_){
			head_next = list_->next_;
			free(list_);
			list_len_--;
			list_ = head_next;
		}
		list_ = NULL;
	}

private:
	size_t    list_len_;
	pListNode list_; //ͷ
};
