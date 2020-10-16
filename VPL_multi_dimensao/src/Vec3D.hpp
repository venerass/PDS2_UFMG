#include "Vec.hpp"
#include <math.h>


class Vec3D : public Vec {
    private:
    
    double x;
    double y;
    double z;

    public:
    
    Vec3D(double x, double y, double z);
    virtual ~Vec3D();
    // std::string to_string() const override;
    double get_norm() const override;

};