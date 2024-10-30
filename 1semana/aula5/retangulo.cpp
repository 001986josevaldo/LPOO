//#include <stdio>

#include <iostream>
using namespace std;

class Retangulo{
    public:
        static int totalFormas;
        Retangulo(){
            totalFormas ++;
        }
        static int getTotalFormas(){
            return totalFormas;
        }
};

int Retangulo :: totalFormas = 0;

int main(){
    Retangulo r1;
    Retangulo r2;

    cout << "Total de formas geometricas "
        << Retangulo:: totalFormas << endl;
    
    cout << "Total de formas geometricas "
        << Retangulo:: getTotalFormas() << endl;
    
}