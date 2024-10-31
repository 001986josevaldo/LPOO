#include <iostream>
using namespace std;

class Motor {
private:
    int potencia;

public:
    Motor(int potencia) : potencia(potencia) {}

    void exibirPotencia() const {
        cout << "Potencia do motor: " << potencia << " CV" << endl;
    }
};

class Carro {
private:
    Motor* motor;  // Ponteiro para um objeto Motor

public:
    // Construtor que inicializa o ponteiro do motor
    Carro(Motor* motor) : motor(motor) {}

    // Método para exibir informações do motor
    void exibirMotor() const {
        if (motor) {
            motor->exibirPotencia();
        } else {
            cout << "Motor não está associado ao carro." << endl;
        }
    }

    // Destrutor para liberar o objeto motor se necessário
    ~Carro() {
        delete motor;  // Libera a memória alocada para o motor
    }
};

int main() {
    // Criação dinâmica de um objeto Motor
    Motor* motor = new Motor(150);

    // Criação dinâmica de um objeto Carro e associação com o Motor
    Carro* carro = new Carro(motor);

    // Exibe a potência do motor através do método exibirMotor() do Carro
    carro->exibirMotor();

    // Libera a memória alocada para o Carro
    delete carro;

    return 0;
}