#include "List.hpp"

int main() {
  int input;
  std::cin >> input;
  List *list = new List();
  while (input != 0) {
    list->insert(input);
    // list->print();
    std::cin >> input;
  }
//   list->print();

  std::cout << "s:" << list->size() << ", ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << ", ";
  std::cout << "r:" << list->remove() << ", ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << ", ";
  list->rotate();
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << std::endl;
  // list->print();
  return 0;
}