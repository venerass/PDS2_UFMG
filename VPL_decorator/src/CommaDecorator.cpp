#include <sstream>

#include "CommaDecorator.hpp"

std::string CommaDecorator::toString() {
  std::stringstream ss(StreamDecorator::toString());
  std::string token;
  std::string str ="";

  while(std::getline(ss,token,' ')){
    for(int i = 0; i<token.length();i++){
      str.push_back(token[i]);
    }
    str.push_back(' ');
    str.push_back(',');
    str.push_back(' ');
  }
  str.pop_back();
  str.pop_back();
  str.pop_back();
  return str;
}