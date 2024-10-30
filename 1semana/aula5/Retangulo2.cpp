
#include <iostream>
#include <cmath>

using namespace std;

class Forma
{
public:
    virtual double calcularArea() const
    {
        return 0;
    }
};

class Quadrilatero : public Forma
{
protected:
    double largura, altura;
public:
    Quadrilatero(double l, double a) : largura(l), altura(a) {}
    double calcularArea() const override
    {
        return largura * altura;
    }
};

class Retangulo : public Quadrilatero
{
public:
    Retangulo(double l, double a) : Quadrilatero(l, a) {}
};

