#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    // Atributos protegidos da classe Animal
    string nome;
    int idade;

public:
    // Construtor
    Animal(string nome, int idade) : nome(nome), idade(idade) {}

    // Método virtual para emitir som
    virtual void emitirSom() const {
        cout << "Animal emite um som genérico." << endl;
    }
};

class Cachorro : public Animal {
public:
    // Construtor que chama o construtor da classe base
    Cachorro(string nome, int idade) : Animal(nome, idade) {}

    // Implementação específica de emitirSom para Cachorro
    void emitirSom() const override {
        cout << nome << " (Cachorro) faz: Au Au!" << endl;
    }
};

class Gato : public Animal {
public:
    // Construtor que chama o construtor da classe base
    Gato(string nome, int idade) : Animal(nome, idade) {}

    // Implementação específica de emitirSom para Gato
    void emitirSom() const override {
        cout << nome << " (Gato) faz: Miau!" << endl;
    }
};

int main() {
    // Ponteiro do tipo base para armazenar um objeto Cachorro
    Animal* animalPtr = new Cachorro("Rex", 5);
    
    animalPtr->emitirSom();  // Deve chamar emitirSom() de Cachorro

    // Liberando a memória alocada para o objeto Cachorro
    delete animalPtr;

    // Ponteiro do tipo base para armazenar um objeto Gato
    animalPtr = new Gato("Mimi", 3);
    animalPtr->emitirSom();  // Deve chamar emitirSom() de Gato

    // Liberando a memória alocada para o objeto Gato
    delete animalPtr;

    return 0;
}