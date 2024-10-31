#include <iostream>
#include <vector>
#include <memory>  // Para smart pointers
#include <cmath>   // Para M_PI
using namespace std;

class FormaGeometrica {
public:
    // Método virtual puro para calcular a área
    virtual double calcularArea() const = 0;

    // Método virtual para retornar o tipo da forma
    virtual string tipoForma() const = 0;

    // Destrutor virtual para garantir a destruição correta das subclasses
    virtual ~FormaGeometrica() {}
};

class Retangulo : public FormaGeometrica {
private:
    double largura;
    double altura;

public:
    Retangulo(double largura, double altura) : largura(largura), altura(altura) {}

    double calcularArea() const override {
        return largura * altura;
    }

    string tipoForma() const override {
        return "Retângulo";
    }
};

class Circulo : public FormaGeometrica {
private:
    double raio;

public:
    Circulo(double raio) : raio(raio) {}

    double calcularArea() const override {
        return M_PI * raio * raio;
    }

    string tipoForma() const override {
        return "Círculo";
    }
};

int main() {
    // Vetor de ponteiros para FormaGeometrica usando smart pointers (unique_ptr)
    vector<unique_ptr<FormaGeometrica>> formas;

    // Alocando dinamicamente objetos Retangulo e Circulo e armazenando no vetor
    formas.push_back(make_unique<Retangulo>(5.0, 3.0));
    formas.push_back(make_unique<Circulo>(4.0));
    formas.push_back(make_unique<Retangulo>(6.0, 2.5));
    formas.push_back(make_unique<Circulo>(2.0));

    // Percorrendo o vetor e chamando calcularArea() e tipoForma() para cada forma
    for (const auto& forma : formas) {
        cout << "Area do " << forma->tipoForma() << ": " << forma->calcularArea() << endl;
    }

    return 0;
}