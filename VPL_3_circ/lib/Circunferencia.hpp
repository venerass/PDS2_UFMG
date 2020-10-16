#include <math.h>

struct Circunferencia
{
    double xc;
    double yc;
    double raio;
    int i;

    double calcularArea();
    
    bool possuiIntersecao(Circunferencia *c);

    Circunferencia(double _xc,double _yc,double _raio);

};
