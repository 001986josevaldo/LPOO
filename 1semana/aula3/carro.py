class Carro:
    def __init__(self, modelo, ano):
        self.modelo = modelo
        self.ano = ano
        self.ligado = False

    # Método para ligar o carro
    def ligar(self):
        self.ligado = True

    # Método para desligar o carro
    def desligar(self):
        self.ligado = False

    # Método para retornar os detalhes do carro
    def __str__(self):
        return f"Modelo: {self.modelo}\nAno: {self.ano}\nLigado = {self.ligado}"

# Exemplo de uso
if __name__ == "__main__":
    c = Carro("UNO", 2005)
    print(c)
    c.ligar()
    print(c)
    c.desligar()
    print(c)
    