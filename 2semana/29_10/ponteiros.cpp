# include  <iostream>
using namespace std;

int main(){
    int M[5] = {92, 81, 70, 69, 58};

    for(int i = 0; i < 5; i++){
        cout << "M[" << i << "] = " << *(M + i) << endl;
    }
    return 0;
}

/*
int main(){
    int x, y;
    int *px = &x;

    *px = 14; // Atribui o valor 14 à variável x
    y = *px; // Atribui o valor de x à variável y

    cout << "\ny = " << y << "\n" << endl;

    system("PAUSE");
    return 0;
}
*/

