#include "List.hpp"


List::List(){
	_size = 0;
	_head = nullptr;
    _end = nullptr;
}

void List::insert(int value){
    Node *node = new Node();
	node->_value = value;
	node->_next = nullptr;
     if (_head == nullptr) {
        _head = node;
        _end = node;
    } else {
        _end->_next = node;
        _end = node;
    }
    _size++;
}

void List::clearList() {
	_head = nullptr;
}

void List::print(){
	Node* head = _head;
	if (_size > 0){
		while(head){
			std::cout << head->_value << " ";
			head = head->_next;
		}
		std::cout<<std::endl;
	}
	else{
        std::cout<< "-";
	    std::cout<<std::endl;
	}
}

void List::removeFirst(){
	Node* current = _head;
	_head = _head->_next;
	delete current;
}

int List::indexOf(int value){
	if (_size > 0){
		Node* head = _head;
		int index = 0;
		while(head && head->_value != value){
			index++;
			head = head->_next;
		}
		if (head->_value == value)
			return index; 
		return -1;
	}
	else{
		return -1;
	}
}

void List::remove(int value){
	if(_size == 0){
        return;
	} 
    else if(_head->_value == value){
		Node* current = _head;
		_head = _head->_next;
		delete current;
        _size--;
	}
	else{
		Node* previous = _head;
		Node* current = _head->_next;
		while(current != nullptr) {
			if(current->_value == value) {
				break;
			}
			else {
				previous = current;
				current = current->_next;
			}
		}
		if(current == nullptr) {
			return;
		}
		else {
			previous->_next = current->_next;
			delete current;
            _size--;
		}
	}
}