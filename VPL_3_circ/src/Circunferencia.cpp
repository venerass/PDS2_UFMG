#include "Circunferencia.hpp"

Circunferencia::Circunferencia(double _xc,double _yc,double _raio){
        xc = _xc;
        yc = _yc;
        raio = _raio;
}

double Circunferencia::calcularArea(){
        return 3.14 * pow(this->raio,2);
}
    
bool Circunferencia::possuiIntersecao(Circunferencia *c){
        float dist = sqrt((pow((this->xc - c->xc),2) + pow((this->yc - c->yc),2)));
        if (dist <= (this->raio + c->raio)){
            return true;
        } else
        {
            return false;
        }
}


