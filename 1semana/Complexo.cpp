
#include <iostream>
using namespace std;

class Complexo{
private:
    double real, imaginario;

public:
    // Construtor com inicialização dos membros
    Complexo (double r = 0, double i = 0) : real(r), imaginario(i){}

    // sobrecarga dos operadores

    Complexo operator +(const Complexo& c) const;
    Complexo operator -(const Complexo& c) const;
    Complexo operator *(const Complexo& c) const;
    Complexo operator /(const Complexo& c) const;

    bool operator == (const Complexo& c) const;
    bool operator != (const Complexo& c) const;

    void Print() const;
};



Complexo Complexo::operator+(const Complexo& c) const{
    return Complexo(real + c.real, imaginario + c.imaginario);
}

Complexo Complexo::operator-(const Complexo& c) const{
    return Complexo(real - c.real, imaginario - c.imaginario);
}

Complexo Complexo::operator*(const Complexo& c) const{
    return Complexo((real * c.real) - (imaginario * c.imaginario),
                    (real * c.imaginario) + (imaginario * c.real));
}

Complexo Complexo::operator/(const Complexo& c) const{
    double denomidor = c.real * c.real + c.imaginario * c.imaginario;
    return Complexo((real * c.real + imaginario * c.imaginario) / denomidor,
                    (imaginario * c.real - real * c.imaginario) / denomidor);
}
bool Complexo:: operator == (const Complexo& c) const{
    return real == c.real && imaginario == c.imaginario;
}

bool Complexo:: operator != (const Complexo& c) const{
    return real != c.real || imaginario != c.imaginario;
}

void Complexo::Print() const{

    cout << real << "+"<< 'i'<< imaginario << endl;
}

int main() {
    Complexo c1(3, 4), c2(1, 2), c3;

    cout << "c1 = ";
    c1.Print();
    cout << "c2 = ";
    c2.Print();

    c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.Print();

    c3 = c1 - c2;
    cout << "c1 - c2 = ";
    c3.Print();

    c3 = c1 * c2;
    cout << "c1 * c2 = ";
    c3.Print();

    c3 = c1 / c2;
    cout << "c1 / c2 = ";
    c3.Print();

    if (c1 == c2)
        cout << "c1 igual a c2" << endl;
    if (c1 != c2)
        cout << "c1 diferente de c2" << endl;

    return 0;
}
