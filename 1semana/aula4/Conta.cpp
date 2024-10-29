#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ContaBancaria{
private: 
    string titular;
    double saldo;
public:
    ContaBancaria(string nome, double saldoInicial) : titular(nome), saldo(saldoInicial) {}

    void exibirSaldo() {
        cout << "Titular: " << titular << ", Saldo: " << saldo << endl;
    }

    void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Saque de " << valor << " BRL realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente para o saque de " << valor << " BRL." << endl;
        }
    }
    void sacar(double valor, double taxaCambio) {
    double valorConvertido = valor * taxaCambio;
    if (valorConvertido <= saldo) {
        saldo -= valorConvertido;
        cout << "Saque de " << valorConvertido << " BRL realizado com sucesso." << endl;
    } else {
        cout << "Saldo insuficiente para o saque de " << valorConvertido << " BRL." << endl;
    }
    }
    void sacar(double valor, string tipoOperacao) {
        double taxa = (tipoOperacao == "credito" ? 0.05 : 0.0);
        double valorComTaxa = valor + (valor * taxa);
        if (valorComTaxa <= saldo) {
            saldo -= valorComTaxa;
            cout << "Saque de " << valor << " BRL realizado com taxa de " << (valor * taxa) << " BRL." << endl;
        } else {
            cout << "Saldo insuficiente para o saque" << endl;
        }
    }
};
int main(){
    ContaBancaria conta("Josevaldo", 5000.00);

    conta.exibirSaldo();
    conta.sacar(1000);
    conta.exibirSaldo();
    conta.sacar(1000, 5.4);
    conta.exibirSaldo();
    conta.sacar(1000, "credito");
    conta.exibirSaldo();
    return 0;
}