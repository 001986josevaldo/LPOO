//Lista.Cpp
//Mostra a implementacao de uma lista ligada
#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;

struct Livro
{
    char Titulo[30];
    char Autor[30];
    int NumReg;
    double Preco;
    Livro *Anterior;
};

class ListaLigada
{
private:
    Livro *Fim;
public:
    ListaLigada() //constutor default
    {
        Fim = (Livro *)NULL;
    }
    void GetLivro();
    void PrintLivro();
    ~ListaLigada();
};

void ListaLigada::GetLivro()
{
    Livro *NovoLivro = new Livro;

    cout << "\nDigite Titulo: ";
    gets(NovoLivro->Titulo);

    cout << "Digite Autor: ";
    gets(NovoLivro->Autor);

    cout << "Digite o numero do registro: ";
    cin >> NovoLivro->NumReg;

    cout << "Digite o preco: ";
    cin >> NovoLivro->Preco;
    //Lipar teclado apos udo de cin
    cin.ignore(10, '\n'); //Limpa teclado

    NovoLivro->Anterior = Fim;
    Fim = NovoLivro;
}

void ListaLigada::PrintLivro()
{
    Livro *Atual = Fim;
    while(Atual != NULL)
    {
        cout << endl;
        cout << "Titulo: " << Atual->Titulo << endl;
        cout << "Autor : " << Atual->Autor << endl;
        cout << "No.reg: " << Atual->NumReg << endl;
        cout << "Preco : " << Atual->Preco << endl;

        Atual = Atual->Anterior;
    }
}

ListaLigada::~ListaLigada()
{
    Livro *Atual = Fim, *Anterior;
    do
    {
        Anterior = Atual->Anterior;
        delete Atual;
        Atual = Anterior;
    }
    while(Atual != NULL);
}

int main()
{
    ListaLigada Lista;

    do
    {
        Lista.GetLivro();
        cout << "\nInserir outro livro (s/n)? " << endl;
    }
    while(getch() != 'n');

    cout << "\nLISTA DOS LIVROS CADASTRADOS";
    cout << "\n============================";

    Lista.PrintLivro();
    //system("PAUSE");
    return 0;
}
