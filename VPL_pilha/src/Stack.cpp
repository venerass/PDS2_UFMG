#include "Stack.h"

struct Node {
  unsigned elem;
  Node* next;
};

Stack::Stack() {
  _top = nullptr;
  _count = 0;
}

void Stack::push(unsigned elem) {
  if(_count == 0){
    Node* node = new Node;
    node->elem = elem;
    node->next = nullptr;
    _top = node;
  }else{
    Node* node = new Node;
    node->elem = elem;
    node->next = _top;
    _top = node;
  }
  _count++;
}

void Stack::pop() {
  if(_count == 0){
    throw EmptyException();
  } else{
    // Node node = new Node;
    // node.next = _top->next;
    // node.elem = _top->elem;
    _top = _top->next;
    _count--;
  }

}

unsigned Stack::top() const {
  if(_count == 0){
    throw EmptyException();
  } else{
    return _top->elem;
  }
}

unsigned Stack::count() const {
  return _count;
}