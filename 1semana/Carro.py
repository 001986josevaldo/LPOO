class Carro:
    def __init__(self, nome, ano):
        self.nome = nome
        self.idade = ano

    def dizer_ola(self):
        print(f"Oii, meu carro e {self.nome} e frabricado em {self.idade}.")
# Criando uma instância da classe Pessoa
p = Carro("Gol", 2020)
# Chamando o método dizer_ola
p.dizer_ola()

