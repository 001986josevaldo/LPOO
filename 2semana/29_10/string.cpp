# include  <iostream>
#include <cstring>
using namespace std;

class String{
private:
    char *str;
public:
    // constructor
    String(){
        str = new char[1];
        *str = '\0';
    }
    String(const char *s){
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    ~String(){
        if(str) delete[] str;
    }
    void Print(){
        cout << str << endl;
    }
};

// Função de teste
int main() {
    String s1("Hello");
    s1.Print();

    String s2 = s1; // Testando o construtor de cópia
    s2.Print();

    String s3;
    s3 = s1; // Testando o operador de atribuição
    s3.Print();

    String s = "A vida e uma longa estrada na qual"
                " se percorre com paciência e cuidado";
    s.Print();

    return 0;
}