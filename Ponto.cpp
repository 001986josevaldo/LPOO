//ClassePonto.Cpp
//Mostra a sobrecarga do operador ++ prefixado
//Sobrecarga ++ do tipo void
#include <iostream.h>
using namespace std;

class Ponto {
private:
    int x, y;

public:
    Ponto(int x1 = 0, int y1 = 0) : x(x1), y(y1) {} // Construtor

    void operator ++();// Função operadora prefixada

    void Print() const;  // Imprime ponto 
};

void operator ++(){
    ++x;
    ++y;
}
void print() const{
    cout << '(' << x << ',' << y << ')' << endl;
}