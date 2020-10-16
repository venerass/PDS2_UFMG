#include "Vec.hpp"
#include <math.h>

class Vec1D : public Vec {
    private:
    
    double x;
    
    public:

    Vec1D(double x);
    virtual ~Vec1D();
    // std::string to_string() const override;
    double get_norm() const override;

};