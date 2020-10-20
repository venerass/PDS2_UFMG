#include "List.hpp"

Node::Node(int data, Node *next) : _data(data), _next(next) {}

void Node::setData(int data){
    this->_data = data;
}

void Node::setNext(Node *next){
    this->_next = next;
}

int Node::getData() const{
    return this->_data;
}

Node *Node::getNext() const{
    return this->_next;
}

List::List(): _head(nullptr), _end(nullptr), _size(0) {}

void List::insert(int value){
    if (this->_size == 0) {
        Node *node = new Node(value, nullptr);
        this->_head = node;
        this->_end = node;
    } else if(this->_size == 1) {
        Node *node = new Node(value, this->_end);
        this->_head = node;
    } else {
        Node *node = new Node(value, this->_head);
        this->_head = node;
    }
    this->_size++;
}

int List::remove(){
    if(_size == 0){
        return 0;
	}  else{
        Node *node = this->_head;
        int i = node->getData();
	    this->_head = this->_head->getNext();
	    delete node;
        _size--;
        return i;
    }
}


bool List::isEmpty(){
    if(_size == 0){
        return true;
    } else{
        return false;
    }
}

unsigned List::size() const{
    return this->_size;
}

int List::middle() const{
    Node *node = this->_head;
    if(_size % 2 == 0){
        for(int i = 0; i<this->_size/2; i++){
        node = node->getNext();
        }
    } else {
        for(int i = 0; i<(this->_size-1)/2; i++){
        node = node->getNext();
        }
    }
    return node->getData();
}

int List::last() const{
    return this->_end->getData(); 
}

void List::rotate(){
    Node *node = new Node(this->_head->getData(),nullptr);
    this->_end->setNext(node);
    this->_end = node;
    this->_head = this->_head->getNext();
}

void List::print(){
	Node* node = this->_head;
	if (_size > 0){
		while(node){
			std::cout << node->getData() << " ";
			node = node->getNext();
		}
		std::cout<<std::endl;
	} else{
        std::cout<< "-";
	    std::cout<<std::endl;
	}
    delete node;
}