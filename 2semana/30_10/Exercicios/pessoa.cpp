#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    // Construtor para inicializar nome e idade
    Pessoa(string nome, int idade) : nome(nome), idade(idade) {}

    // Método para exibir os dados
    void exibirDados() const {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
    }
};

int main() {
    // objeto Pessoa dinamicamente
    Pessoa* pessoaPtr = new Pessoa("João", 25);

    //exibirDados através do ponteiro
    pessoaPtr->exibirDados();

    // Liberando a memória alocada
    delete pessoaPtr;

    return 0;
}