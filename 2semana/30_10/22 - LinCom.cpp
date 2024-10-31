//LinCom.Cpp
//Mostra argumentos da linha de comando
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout << "Numero de argumentos: " << argc << endl;

    for(int i = 0; i < argc; i++)
        cout << "Argumento numero " << i << ": " <<  argv[i] << endl;

    //system("PAUSE");
    return 0;
}
