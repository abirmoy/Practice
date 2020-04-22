#pragma once
#include <iostream>

//优先队列节点
template<typename DataType>
struct QueueNode {
    QueueNode(const DataType& data) :data_(data), next_(NULL) {};
    QueueNode() :next_(NULL) {};

    bool operator <(const DataType& other) {
        return data < other;
    }
    bool operator >(const DataType& other) {
        return data > other;
    }
    DataType data_;
    QueueNode<DataType>* next_;
};

enum class Short{
    Less,   //降序
    More    //升序
};
//优先队列
template<typename DataType>
class PriorityQueue {
public:

    PriorityQueue(const PriorityQueue<DataType>& other) {
        if (que_head_) _free_mem();
        QueueNode<DataType>* other_head = other._get_front();
        while (other_head) {
            this->Insert(other_head->data_);
            other_head = other_head->next_;
        }
    };
    PriorityQueue<DataType>& operator=(const PriorityQueue<DataType>& other) {
        if (que_head_)_free_mem();
        QueueNode<DataType>* other_head = other.GetFront();
        while (other_head) {
            this->Insert(other_head->data_);
            other_head = other_head->next_;
        }
        return *this;
    }
    PriorityQueue(Short type=Short::Less) :type_(type),que_len_(0), que_head_(NULL) {};
    ~PriorityQueue() {
        _free_mem();
    };
    inline QueueNode<DataType>* GetFront() const {
        return _get_front();
    }
    inline QueueNode<DataType>* GetTitail() {
        return _get_titail();
    }
    void  PopFront() {
        if (!que_head_)return;
        QueueNode<DataType>* head_next = que_head_->next_;
        delete que_head_;
        que_head_ = head_next;
    }
    void  PopBack() {
        if (!que_head_)return;
        QueueNode<DataType>* titail_pre = NULL;
        QueueNode<DataType>* titail = que_head_;
        while (titail) {
            if (titail->next_) {
                titail_pre = titail;
                titail = titail->next_;
            }
            else break;
        }
        if (!titail_pre) {
            que_head_ = NULL;
            delete titail;
        }
        delete titail;
        titail_pre->next_ = NULL;
        que_len_--;
    }


    size_t Insert( const DataType & data) {
      if(type_==Short::Less)
          return ShortLess(data);
      else
         return  ShortMore(data);
    }

    inline void  Clear() { __free_mem() };
    inline size_t Len() { return que_len_; }
    void Erase(const DataType& data) {
        if (!que_head_)return;
        QueueNode<DataType>* tmp_head = que_head_;
        QueueNode<DataType>* head_pre = NULL;
        while (tmp_head) {
            if (tmp_head->data_ == data) {
                if (!head_pre) {
                    head_pre = que_head_->next_;
                    delete que_head_;
                    que_head_ = head_pre;
                }
                else {
                    head_pre->next_ = tmp_head->next_;
                    delete tmp_head;
                    tmp_head = head_pre;
                }
                que_len_--;
                return;
            }
            head_pre = tmp_head;
            tmp_head = tmp_head->next_;
        }
    }
    inline bool Empty() { return !que_head_; }
protected:

    size_t ShortMore(const DataType& data){
        QueueNode<DataType>* new_node = new QueueNode<DataType>(data);
        if (!que_head_) {
            que_head_ = new_node;
            return ++que_len_;
        }

        QueueNode<DataType>* tmp_head = que_head_;
        QueueNode<DataType>* tmp_head_pre = NULL;
        while (tmp_head) {
            if (tmp_head->data_ > new_node->data_)
                break;
            tmp_head_pre = tmp_head;
            tmp_head = tmp_head->next_;

        }
        if (tmp_head == que_head_) {
            new_node->next_ = que_head_;
            que_head_ = new_node;
        }
        else {
            tmp_head_pre->next_ = new_node;
            new_node->next_ = tmp_head;
        }
        return ++que_len_;

    }
    size_t ShortLess(const DataType& data){
        QueueNode<DataType>* new_node = new QueueNode<DataType>(data);
        if (!que_head_) {
            que_head_ = new_node;
            return ++que_len_;
        }

        QueueNode<DataType>* tmp_head = que_head_;
        QueueNode<DataType>* tmp_head_pre = NULL;
        while (tmp_head) {
            if (tmp_head->data_ < new_node->data_)
                break;
            tmp_head_pre = tmp_head;
            tmp_head = tmp_head->next_;

        }
        if (tmp_head == que_head_) {
            new_node->next_ = que_head_;
            que_head_ = new_node;
        }
        else {
            tmp_head_pre->next_ = new_node;
            new_node->next_ = tmp_head;
        }
        return ++que_len_;

    }
    //释放队列实现
    void _free_mem() {
        QueueNode<DataType>* head_next = NULL;
        while (que_head_) {
            head_next = que_head_->next_;
            delete que_head_;
            que_head_ = head_next;
        }
        que_head_ = NULL;
    }
    //获取第一个节点实现
    QueueNode<DataType>* _get_front()const {
        return  que_head_;
    }

    //获取尾节点实现

    QueueNode<DataType>* _get_titail() {
        QueueNode<DataType>* pre_node = NULL;
        QueueNode<DataType>* tmp_head = que_head_;
        while (tmp_head) {
            pre_node = tmp_head;
            tmp_head = tmp_head->next_;
        }
        return pre_node;
    }
private:
    Short      type_;
    size_t     que_len_;
    QueueNode<DataType>* que_head_;

};
