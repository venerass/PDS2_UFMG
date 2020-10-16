#include <iostream>
#include "classes.hpp"

int main() {
  Exp *e = readInput();
  std::cout << e->value() << std::endl;
  delete e;
}