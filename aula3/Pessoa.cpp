#include <string>
#include <iostream>
using namespace std;

class Pessoa{

private:
    string nome;
    int idade;

public:

    Pessoa(string n, int i): nome(n), idade(i){}
    void setNome(string n){
        nome = n;
    }
    void setIdade(int i){
        idade = i;
    }
    string getNome(){
        return nome;
    }
    int getIdade(){
        return idade;
    }

};

int main(){

    Pessoa p("Antonio", 35);

    cout << "Nome: "<< p.getNome()<< endl;
    cout << "idade: "<< p.getIdade()<< endl;

    p.setNome("Josevaldo");
    p.setIdade(25);

    cout << "Nome: "<< p.getNome()<< endl;
    cout << "idade: "<< p.getIdade()<< endl;
    
    // o trecho a baixo não funciona pois os dados são privados
    //cout << "Nome: "<< p.nome()<< endl;
    //cout << "idade: "<< p.idade()<< endl;

    return 0;
}

