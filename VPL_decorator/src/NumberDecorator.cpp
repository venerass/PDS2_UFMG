#include <sstream>

#include "NumberDecorator.hpp"

std::string NumberDecorator::toString() {
  std::stringstream ss(StreamDecorator::toString());
  std::string token;
  std::string str ="";

  while(std::getline(ss,token,' ')){
    double x;
    char c[10];
    // sscanf(*token, "%d", &x); 
    for(int i = 0; i<token.length();i++){
      c[i] = token[i];
    }
    if(sscanf(c, "%lf", &x) && x > 0 && x - int(x) == 0){

      str.push_back('+');

      for(int i = 0; i<token.length();i++){
        str.push_back(token[i]);
      }

      str.push_back(' ');

    } else{
      for(int i = 0; i<token.length();i++){
        str.push_back(token[i]);
      }
      str.push_back(' ');
    }
    // for(int i = 0; i<token.length();i++){
    //   str.push_back(token[i]);
    // }
    // str.push_back(' ');
    // str.push_back(',');
    // str.push_back(' ');
  }
  str.pop_back();
  return str;
}