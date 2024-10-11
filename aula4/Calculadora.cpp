#include <iostream>
#include <vector>
using namespace std;

class Calculadora{

public:

    int somar(int a, int b){
        return a + b;
    }

    int somar(int a, int b, int c){
        return a + b + c;
    }

    double somar(double a, double b){
        return a + b;
    }

    int somar(vector<int>& nums){
        int soma = 0;
        for(int num : nums)
            soma += num;
        return soma;
    }

    double somar(vector<double>& nums){
        double soma = 0.0;
        int tam = nums.size();
        for(int i = 0; i < tam; i ++)
            soma += nums[i];
        return soma;
    }

    int multiplicar(int a, int b){
        return a * b;
    }

    int multiplicar(int a, int b, int c){
        return a * b * c;
    }

    int multiplicar(vector<int>& nums){
        int soma = 1;
        for(int num : nums)
            soma *= num;
        return soma;
    }

};

int main() {
    Calculadora calc;

    cout << "Soma de 2 e 3: " << calc.somar(2, 3) << endl;
    cout << "Soma de 2, 3 e 4: " << calc.somar(2, 3, 4) << endl;
    cout << "Soma de 2.5 e 3.5: " << calc.somar(2.5, 3.5) << endl;

    vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Soma do vetor: " << calc.somar(numeros) << endl;

    cout << "Multiplicação de 2 e 3: " << calc.multiplicar(2, 3) << endl;
    cout << "Multiplicação de 2, 3 e 4: " << calc.multiplicar(2, 3, 4) << endl;
    cout << "Multiplicação de 2.5 e 3.5: " << calc.multiplicar(2.5, 3.5) << endl;
    cout << "Multiplicação do vetor: " << calc.multiplicar(numeros) << endl;

    return 0;
}