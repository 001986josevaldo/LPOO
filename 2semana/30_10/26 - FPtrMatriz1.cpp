//FPtrMatriz.CPP
//Mostra uma matriz de ponteiros para funcao
#include <iostream>
using namespace std;

void func0(void), func1(void), func2(void);//prototipos

typedef void (*PFunc)(void);// O tipo PFunc é ponteiro para a função void

int main()
{
    void (*ptrf[3])(void) = {func0, func1, func2}; ;//Matriz inicializada

    do
    {
        int i;
        cout << "0 - ABRIR" << endl;
        cout << "1 - FECHAR" << endl;
        cout << "2 - SALVAR" << endl;
        cout << "\nEscola um item: ";
        cin >> i;

        if(i < 0 || i > 2) break;
        (ptrf[i])();

    }
    while(true);

    //system("PAUSE");
    return 0;
}

void func0()
{
    cout << "\n*** Estou em func0() ***" << endl;
}

void func1()
{
    cout << "\n*** Estou em func1() ***" << endl;
}

void func2()
{
    cout << "\n*** Estou em func2() ***" << endl;
}
