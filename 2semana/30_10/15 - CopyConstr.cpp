#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *str;
public:
    String() // Construtor Default
    {
        str = new char;
        *str = '\0';
    }

    String (char *s) // Construtor converte matriz em string
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(const String& s) //copyConstrutor
    {
        int tamanho = strlen(s.str);
        str = new char[tamanho + 1];
        strcpy(str, s.str);
    }

    String& operator=(const String& s)
    {
        if(&s == this) return *this;
        int tamanho = strlen(s.str);
        delete [] str;
        str = new char[tamanho + 1];
        strcpy(str, s.str);
        return *this;
    }

    ~String()
    {
        if(str) delete[] str;
    }

    void Print() const
    {
        cout << str << endl;
    }
};

void ChamaFunc(String);

int main()
{
    String s1 = "A vida e uma longa estrada na qual "
                "Corremos contra o tempo.";
    {
        String s2; // objeto com escopo interno
        s2 = s1;
        s2.Print();
    }

    ChamaFunc(s1);

    String s3, s4;

    s3 = s4 = s1; // atribuicoes multiplas

    s3.Print();
    s4.Print();

    //system("PAUSE");
    return 0;
}

void ChamaFunc(String x)
{
    x.Print();
}
