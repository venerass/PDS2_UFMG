#include <iostream>

#include "Point.hpp"

std::ostream & operator << (std::ostream &out, const Point &p) {
  out << "(" << p.getX() << "," << p.getY() << ")";
  return out;
}

std::istream & operator >> (std::istream &in,  Point &p) {
  in >> p.x >> p.y;
}

Point Point::operator + (const Point &p) {
  Point a(p.getX() +this->getX(), p.getY() + this->getY());
  return a;
}

Point& Point::operator += (const Point &p) {
    this->x = this->x + p.x;
    this->y = this->y + p.y;
    return *this;
}