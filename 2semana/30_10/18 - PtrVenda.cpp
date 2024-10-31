//PtrVenda.Cpp
//Mostra o aceso a funcoes membro por ponteiros
#include <iostream>
#include <iomanip>
using namespace std;

class Venda
{
private:
    int npecas;
    float preco;
public:
    void GetVenda();
    void PrintVenda() const;
};

void Venda::GetVenda()
{
    cout << "Insira o Numero de Peças: ";
    cin >> npecas;// nao notacao cientifica
    cout << "Insira Preço :";
    cin >> preco;
}

void Venda::PrintVenda() const
{
    cout << setiosflags(ios::fixed) // nao notacao cientifica
         << setiosflags(ios::showpoint) //ponto decimal
         << setprecision(2) // duas casas
         << setw(10) << npecas; //tamanho 10
    cout << setw(10) << preco << endl;
}

int main()
{
    Venda A;
    Venda *B;

    B = new Venda;

    A.GetVenda();
    (*B).GetVenda();

    A.PrintVenda();
    B->PrintVenda();

    //system("PAUISE");
    return 0;
}
