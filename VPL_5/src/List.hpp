#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstdlib>

struct Node{
	int _value;
	Node *_next;
};

struct List{
	Node *_head;
    Node *_end;
	int _size;

	List();
	void insert(int value);
	void remove(int value);
	void print();
	void clearList();
	void removeFirst();
	int indexOf(int value);
};

#endif