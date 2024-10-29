/*

define vetor são elementos
biblioteca vector
vetor de n elementos

fazer para 3 dimensoes
classe Vetor3D
Atributo:
x
y
z
privados

operadores
operator+
operator-
operator*(double)()
operator*
operator==
operator!=
Print
criar 3 vetores

*/

#include <iostream>
using namespace std;

class Vetor3D {
private:
    int x, y, z;

public:
    Vetor3D(int x1 = 0, int y1 = 0,int z1 = 0) : x(x1), y(y1), z(z1) {} // Construtor

    Vetor3D operator+(const Vetor3D& v) const;//
    Vetor3D operator-(const Vetor3D& v) const;// subtração dos pontos
    Vetor3D operator * (double e) const;
    Vetor3D operator*(const Vetor3D& v) const;// multiplicação

    bool operator==(const Vetor3D& v) const;// igualdade
    bool operator!=(const Vetor3D& v) const;// diferente
    // Imprime ponto
    void Print() const;
};

// Operador de adição por escalar
Vetor3D Vetor3D :: operator+(const Vetor3D& v) const {
    return Vetor3D(x + v.x, y + v.y, z + v.z);
}

// Operador de subtração por outro vetor
Vetor3D Vetor3D::operator-(const Vetor3D& v) const {
    return Vetor3D(x - v.x, y - v.y, z - v.z);
}

// Operador de multiplicação por escalar
Vetor3D Vetor3D::operator*(double e) const {
    return Vetor3D(x * e, y * e, z * e);
}

// Operador de multiplicação vetorial (produto cruzado)
Vetor3D Vetor3D::operator*(const Vetor3D& v) const {
    return Vetor3D(
        y * v.z - z * v.y,  // Componente x
        z * v.x - x * v.z,  // Componente y
        x * v.y - y * v.x   // Componente z
    );
}

// Operador de igualdade
bool Vetor3D::operator==(const Vetor3D& v) const {
    return (x == v.x && y == v.y && z == v.z);
}

// Operador de desigualdade
bool Vetor3D::operator!=(const Vetor3D& v) const {
    return !(*this == v);
}

// Função para imprimir o vetor
void Vetor3D::Print() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

int main() {
    Vetor3D v1(1, 2, 3), v2(4, 5, 6), v3;
    v1.Print();
    v2.Print();
    v3.Print();
    // Adição por escalar
    v3 = v1 + v2;
    cout << "v1 + v2 = ";
    v3.Print();

    // Subtração por vetor
    v3 = v1 - v2;
    cout << "v1 - v2 = ";
    v3.Print();

    // Multiplicação por escalar
    v3 = v1 * 2.0;
    cout << "v1 * 2 = ";
    v3.Print();

    // Produto vetorial (multiplicação entre vetores)
    v3 = v1 * v2;
    cout << "v1 * v2 (produto vetorial) = ";
    v3.Print();

    // Comparação de igualdade
    if (v1 == v2) {
        cout << "v1 é igual a v2" << endl;
    } else {
        cout << "v1 é diferente de v2" << endl;
    }

    return 0;
}



