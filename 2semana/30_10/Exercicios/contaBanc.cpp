#include <iostream>
#include <locale>  // Para configurar a localidade
using namespace std;

class ContaBancaria {
protected:
    double saldo;

public:
    ContaBancaria() : saldo(0.0) {}

    virtual void depositar(double valor) {
        saldo += valor;
        cout << "Deposito: " << valor << ". Saldo atual: " << saldo << endl;
    }

    virtual void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Saque: " << valor << ". Saldo atual: " << saldo << endl;
        } else {
            cout << "Saldo insuficiente para saque de " << valor << endl;
        }
    }

    virtual ~ContaBancaria() {
        cout << "ContaBancaria destruida." << endl;
    }
};

class ContaPoupanca : public ContaBancaria {
public:
    void renderJuros(double taxa) {
        double rendimento = saldo * taxa;
        saldo += rendimento;
        cout << "Rendimento aplicado com taxa " << taxa << ": " << rendimento << ". Saldo atual: " << saldo << endl;
    }

    ~ContaPoupanca() {
        cout << "ContaPoupanca destruida." << endl;
    }
};

int main() {
    // Configura a localidade para português
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Criação dinâmica de um objeto ContaPoupanca usando ponteiro para ContaBancaria
    ContaBancaria* conta = new ContaPoupanca();

    // Realiza operações de depósito, saque e rendimento
    conta->depositar(1000);
    conta->sacar(200);

    // Conversão do ponteiro ContaBancaria para ContaPoupanca para acessar renderJuros()
    ContaPoupanca* contaPoupanca = dynamic_cast<ContaPoupanca*>(conta);
    if (contaPoupanca) {
        contaPoupanca->renderJuros(0.05);  // Aplicando uma taxa de juros de 5%
    } else {
        cout << "Erro ao converter para ContaPoupanca." << endl;
    }

    // Liberação da memória alocada para conta
    delete conta;

    return 0;
}