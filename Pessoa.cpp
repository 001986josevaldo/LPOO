#include <iostream>
#include <string>
using namespace std;
class Pessoa{

public:
    string nome;
    int idade;

    void dizer_ola(){
    cout << "Oii, meu nome e "
        <<nome<< " e tenho "
        <<idade<<" anos!";
    }

};
int main(){

    Pessoa p;
    p.nome = "Josevaldo";
    p.idade = 25;
    p.dizer_ola();


return 0;
}
