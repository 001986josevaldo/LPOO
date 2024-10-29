class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def dizer_ola(self):
        print(f"Oii, meu nome e {self.nome} e tenho {self.idade} anos!")
# Criando uma instância da classe Pessoa
p = Pessoa("Josevaldo", 25)
# Chamando o método dizer_ola
p.dizer_ola()

# Criando uma instância da classe Pessoa
