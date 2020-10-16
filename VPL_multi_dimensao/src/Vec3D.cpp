#include "Vec3D.hpp"

Vec3D::Vec3D(double x, double y, double z) : x(x), y(y), z(z) {}


Vec3D::~Vec3D(){}


double Vec3D::get_norm() const{
    double norm;
    norm = pow((pow(x,2) + pow(y,2) + pow(z,2)),0.5);
    return norm;
}
