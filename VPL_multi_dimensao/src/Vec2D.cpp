#include "Vec2D.hpp"

Vec2D::Vec2D(double x, double y) : x(x), y(y) {}

Vec2D::~Vec2D(){}

double Vec2D::get_norm() const{
    double norm;
    norm = pow((pow(x,2) + pow(y,2)),0.5);
    return norm;
}

