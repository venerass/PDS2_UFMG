#include "classes.hpp"

/**
 * brief: This function reads an expression from the standard
 * input.
 * return an object of type Exp (a subtype of Exp, precisely)
 * representing the expression just read in Polish Notation.
 */
Exp* readInput() {
  std::string s;
  std::cin >> s;
  switch(s[0]) {
    case '*':
      return new Mul(readInput(), readInput());
    case '+':
      return new Add(readInput(), readInput());
    default:
      return new Num(stod(s));
  }
}