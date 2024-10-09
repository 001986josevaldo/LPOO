//ClassePonto.Cpp
//Mostra a sobrecarga do operador ++ prefixado
//Sobrecarga ++ do tipo void
#include <iostream>
using namespace std;

class Ponto {
private:
    int x, y;

public:
    Ponto(int x1 = 0, int y1 = 0) : x(x1), y(y1) {} // Construtor

    Ponto operator ++();// Função operadora pre fixada
    Ponto operator ++(int); // pós fixado
    Ponto operator +(Ponto& p) const;// soma de dois objetos
    Ponto operator +(int n) const; // soma com escalar
    Ponto operator-(const Ponto& p) const;// subtração dos pontos
    Ponto operator-(int n) const;// subtração por escalar
    Ponto operator*(int n) const;// multiplicação
    bool operator==(const Ponto& p) const;// igualdade
    bool operator!=(const Ponto& p) const;// diferente
    // Imprime ponto
    void Print() const;
};

Ponto Ponto::operator ++(){
    ++x;
    ++y;
    return Ponto(x,y);
}
Ponto Ponto::operator ++(int){
    ++x;
    ++y;
    return Ponto(x-1,y-1);
}
Ponto Ponto ::operator+(Ponto& p) const{
    return Ponto(x + p.x, y + p.y);
}

Ponto Ponto ::operator+(int n) const{
    return Ponto(x + n, y + n);
}
Ponto Ponto ::operator-(const Ponto& p) const {
    return Ponto(x - p.x, y - p.y);
}

Ponto Ponto ::operator-(int n) const {
    return Ponto(x - n, y - n);
}
Ponto Ponto ::operator*(int n) const {
    return Ponto(x * n, y * n);
}
// iguais
bool Ponto ::operator == (const Ponto& p) const {
    return (x == p.x && y == p.y);
}
// diferentes
bool Ponto ::operator != (const Ponto& p) const {
    return (x != p.x || y != p.y);
}


// -----------------------------------------------------------------------
void Ponto::Print() const {
    cout << '(' << x << ',' << y << ')' << endl;
}

int main() {
    Ponto A, B(2, 3), C, D; // Declara e inicializa

    cout << "A = "; A.Print();
    cout << " B = "; B.Print();

    //++A; // Incrementa A
    //++B; // Incrementa B

    //cout << "\n++A = "; (++A).Print();
    //cout << " ++B = "; (B++).Print();

    //cout << "A = "; A.Print();
    //cout << " B = "; B.Print();


    C = A + B;
    D = A + 5;


    cout << "\n C = "; C.Print();
    cout << "\n D = "; D.Print();


    Ponto p1(3, 4), p2(3, 4), p3(1, 2);

    if (p1 == p2) {
        std::cout << "p1 e p2 são iguais!" << std::endl;
    }

    if (p1 != p3) {
        std::cout << "p1 e p3 são diferentes!" << std::endl;
    }



    system("PAUSE");
    return 0;
}
