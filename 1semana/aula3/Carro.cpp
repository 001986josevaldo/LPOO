#include <iostream>
#include <string>
using namespace std;

class Carro{
private:
    string modelo;
    int ano;
    bool ligado;
public:
    Carro(string m, int a): modelo(m), ano(a), ligado(false){}
    void ligar(){
        ligado = true;
    }
    void desligar(){
        ligado = false;
    }
    void Print(){
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Status: " << (ligado ? "Ligado" : "Desligado") << endl;
    }
};

int main() {
    Carro meuCarro("Fusca", 1972);

    // Exibindo os dados do carro
    meuCarro.Print();

    // Ligando o carro
    meuCarro.ligar();

    // Exibindo os dados do carro após ligar
    cout << "\nApós ligar o carro:\n";
    meuCarro.Print();
    
    cout << "\nApós desligar o carro:\n";
    meuCarro.desligar();

    meuCarro.Print();

    return 0;
}