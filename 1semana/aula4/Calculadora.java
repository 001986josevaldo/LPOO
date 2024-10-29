import java.util.List;

public class Calculadora {
    // Método para somar dois inteiros
    public int somar(int a, int b) {
        return a + b;
    }

    // Sobrecarga para somar três inteiros
    public int somar(int a, int b, int c) {
        return a + b + c;
    }

    // Sobrecarga para somar dois números do tipo double
    public double somar(double a, double b) {
        return a + b;
    }

    // Método para somar todos os números de uma lista de inteiros
    public int somar(List<Integer> numeros) {
        int soma = 0;
        for (int num : numeros) {
            soma += num;
        }
        return soma;
    }
    public int multiplicar(int a, int b) {
        return a * b;
    }
    public int multiplicar(int a, int b, int c) {
        return a * b * c;
    }
    public double multiplicar(double a, double b) {
        return a * b;
    }
    public int multiplicar(List<Integer> numeros) {
        int produto = 1;
        for (int num : numeros) {
            produto *= num;
        }
        return produto;
    }

    public static void main(String[] args) {
        Calculadora calc = new Calculadora();
        
        // Exemplo de soma com dois inteiros
        System.out.println("Soma de 2 e 3: " + calc.somar(2, 3));
        
        // Exemplo de soma com três inteiros
        System.out.println("Soma de 2, 3 e 4: " + calc.somar(2, 3, 4));
        
        // Exemplo de soma com números do tipo double
        System.out.println("Soma de 2.5 e 3.5: " + calc.somar(2.5, 3.5));
        
        // Exemplo de soma com uma lista de inteiros
        List<Integer> numeros = List.of(1, 2, 3, 4, 5, 6, 7, 8, 9);
        System.out.println("Soma do vetor: " + calc.somar(numeros));
        
        // Exemplo de multiplicação com dois inteiros
        System.out.println("Multiplicação de 2 e 3: " + calc.multiplicar(2, 3));

        // Exemplo de multiplicação com três inteiros
        System.out.println("Multiplicação de 2, 3 e 4: " + calc.multiplicar(2, 3, 4));

        // Exemplo de multiplicação com números do tipo double
        System.out.println("Multiplicação de 2.5 e 3.5: " + calc.multiplicar(2.5, 3.5));

        // Exemplo de multiplicação com uma lista de inteiros
        System.out.println("Multiplicação da lista: " + calc.multiplicar(numeros));

    }
}