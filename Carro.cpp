#include <iostream>
#include <string>
using namespace std;
class Carro{

public:
    string modelo;
    int ano;

    void ligar(){
    cout << "Carro ligado "
        <<modelo<< " fabricado em "
        <<ano<<"";
    }

};
int main(){

    Carro c;
    c.modelo = "Gol";
    c.ano = 2023;
    c.ligar();


return 0;
}