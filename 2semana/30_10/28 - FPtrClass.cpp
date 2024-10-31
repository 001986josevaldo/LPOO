//FPtrClass.Cpp
//Mostra ponteiros para metodos de classe
#include <iostream>
using namespace std;

class Calculadora
{
private:
    float a, b;
public:
    Calculadora() : a(1), b(1) {}
    Calculadora(float x, float y): a(x), b(y) {}

    float adicao()
    {
        return a + b;
    }
    float subtracao()
    {
        return a - b;
    }
    float multiplicacao()
    {
        return a * b;
    }
    float divisao()
    {
        return a / b;
    }
};

typedef float (Calculadora::*PFunc)();

int main()
{
    Calculadora x(2.8, 3.1);

    PFunc ptrf[4] = {Calculadora::adicao,
                     Calculadora::subtracao,
                     Calculadora::multiplicacao,
                     Calculadora::divisao
                    };

    do
    {
        int i;
        cout << "0 - Adicao" << endl;
        cout << "1 - Subtracao" << endl;
        cout << "2 - multiplicacao" << endl;
        cout << "3 - Divisao" << endl;
        cout << "\nEscola um item: ";
        cin >> i;
        if(i < 0 || i > 3) break;

        cout << (x.*ptrf[i])() << endl; // chama a função
    }
    while(true);

    //system("PAUSE");
    return 0;
}
