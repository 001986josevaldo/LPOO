#include <iostream>
#include <string>
using namespace std;
class Livro{

public:
    string titulo;
    string autor;
    int ano;

    void exibir(){
    cout << "Titulo: "
        <<titulo<< "\nAutor: "
        <<autor<< "\nLancamento: "
        <<ano<<"";
    }
};
int main(){

    Livro l;
    l.titulo = "LPOO";
    l.autor = "Tanembaum";
    l.ano = 2024;
    l.exibir();
return 0;
}