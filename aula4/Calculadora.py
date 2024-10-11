class Calculadora:

    # Método para somar dois ou mais números
    def somar(self, *args):
        return sum(args)

    # Método para somar todos os números de uma lista de inteiros
    def somar_lista(self, numeros: list) -> int:
        return sum(numeros)

    # Método para multiplicar dois ou mais números
    def multiplicar(self, *args):
        produto = 1
        for num in args:
            produto *= num
        return produto

    # Método para multiplicar todos os números de uma lista de inteiros
    def multiplicar_lista(self, numeros: list) -> int:
        produto = 1
        for num in numeros:
            produto *= num
        return produto


# Testando os métodos da Calculadora
if __name__ == "__main__":
    calc = Calculadora()
    
    # Exemplo de soma com dois inteiros
    print("Soma de 2 e 3:", calc.somar(2, 3))
    
    # Exemplo de soma com três inteiros
    print("Soma de 2, 3 e 4:", calc.somar(2, 3, 4))
    
    # Exemplo de soma com números do tipo float
    print("Soma de 2.5 e 3.5:", calc.somar(2.5, 3.5))
    
    # Exemplo de soma com uma lista de inteiros
    numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    print("Soma da lista:", calc.somar_lista(numeros))
    
    # Exemplo de multiplicação com dois inteiros
    print("Multiplicação de 2 e 3:", calc.multiplicar(2, 3))
    
    # Exemplo de multiplicação com três inteiros
    print("Multiplicação de 2, 3 e 4:", calc.multiplicar(2, 3, 4))
    
    # Exemplo de multiplicação com números do tipo float
    print("Multiplicação de 2.5 e 3.5:", calc.multiplicar(2.5, 3.5))
    
    # Exemplo de multiplicação com uma lista de inteiros
    print("Multiplicação da lista:", calc.multiplicar_lista(numeros))
