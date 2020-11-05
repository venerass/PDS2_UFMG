// Copyright 2018 Universidade Federal de Minas Gerais (UFMG)

#include "complexo.h"

#include <cmath>

#define precisao 1E-6

Complexo::Complexo() {
  raio = 0.0;
  teta = 0.0;
}

Complexo::Complexo(double a) {
  raio = a;
  teta = 0.0;
}

Complexo::Complexo(double a, double b) {
  raio = pow((a*a + b*b),0.5);
  teta = atan2(b,a);
}

double Complexo::real() const {
  return raio * cos(teta);
}

double Complexo::imag() const {
  return raio * sin(teta);
}

bool Complexo::operator==(Complexo x) const {
  // return (raio * cos(teta)) == (x.raio * cos(x.teta)) && (raio * sin(teta)) == (x.raio * sin(x.teta));
  return (fabs((raio * cos(teta) - (x.raio * cos(x.teta))) <= 1E-6)&&(fabs((raio * sin(teta)) - (x.raio * sin(x.teta))) <= 1E-6)); 
}

void Complexo::operator=(Complexo x) {
  raio = x.raio;
  teta = x.teta;
}

double Complexo::modulo() const {
  return raio;
}

Complexo Complexo::conjugado() const {
  Complexo c(raio*cos(teta), -(raio*sin(teta)));
  return c;
}

Complexo Complexo::operator-() const {
  Complexo c(-(raio*cos(teta)), -(raio*sin(teta)));
  return c;
}

Complexo Complexo::inverso() const {
  double divisor = pow(raio*cos(teta),2) + pow(raio*sin(teta),2);
  Complexo i((raio*cos(teta)) / divisor, -(raio*sin(teta)) / divisor);
  return i;
}

Complexo Complexo::operator+(Complexo y) const {
  Complexo s((raio * cos(teta)) + (y.raio * cos(y.teta)), ((raio*sin(teta)) + (y.raio * sin(y.teta))));
  return s;
}

Complexo Complexo::operator-(Complexo y) const {
  return (*this) + -y;
}

Complexo Complexo::operator*(Complexo y) const {
  Complexo p((raio*cos(teta)) * (y.raio * cos(y.teta)) - (raio*sin(teta)) * (y.raio * sin(y.teta)), (raio * cos(teta)) * (y.raio * sin(y.teta)) + (raio*sin(teta)) * (y.raio*cos(y.teta)));
  return p;
}

Complexo Complexo::operator/(Complexo y) const {
  return (*this) * y.inverso();
}
