#include "Vec.hpp"
#include <math.h>


class Vec2D : public Vec {
    private:

    double x;
    double y;

    public:
    
    Vec2D(double x, double y);
    virtual ~Vec2D();
    // std::string to_string() const override;
    double get_norm() const override;
};