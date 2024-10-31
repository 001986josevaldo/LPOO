//MPtrVenda.Cpp
//Mostra Matriz de ponteiros para objetos
#include <iostream>
#include <iomanip>
#include <conio.h>
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
    Venda *p[80];
    int i = 0;

    do
    {
        p[i] = new Venda;
        p[i++]->GetVenda();
        cout << "Deseja entrar com mais uma venda (s/n)?" << endl;
    }
    while(getch() != 'n');

    cout << "\nRELATORIO DE VENDAS" << endl;
    int j;
    for(j = 0; j < i; j++)
    {
        p[j]->PrintVenda();
        delete p[j];
    }

    //system("PAUISE");
    return 0;
}
