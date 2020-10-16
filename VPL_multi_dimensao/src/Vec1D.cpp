#include "Vec1D.hpp"

Vec1D::Vec1D(double x) : x(x) {}

Vec1D::~Vec1D(){}

double Vec1D::get_norm() const{
    return x;
}