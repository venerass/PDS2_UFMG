#include <bits/stdc++.h>
#include <iostream>


class Node {
  private:
    int _data;
    Node *_next;
  public:
    Node(int data, Node* next);
    void setData(int data);
    void setNext(Node *next);
    int getData() const;
    Node* getNext()const;
};



class List {
  public:

    List();
    void insert(int value);
    int remove();
    bool isEmpty();
    unsigned size() const;
    int middle() const;
    int last() const;
    void rotate();
    void print();

    private:

    Node *_head;
    Node *_end;
    int _size; 
};

