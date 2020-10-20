#ifndef VEC_H
#define VEC_H
#include <sstream>

class Vec {
  public:
    // Vec(){};
    virtual ~Vec() {};
    // virtual std::string to_string() const = 0;
    virtual double get_norm() const = 0;
};

#endif