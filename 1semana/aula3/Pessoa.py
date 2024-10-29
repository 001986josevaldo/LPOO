class Pessoa:
    # construtor
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    # Métodos setters
    def set_nome(self, nome):
        self.nome = nome

    def set_idade(self, idade):
        self.idade = idade

    # Métodos getters
    def get_nome(self):
        return self.nome

    def get_idade(self):
        return self.idade

# Exemplo de uso da classe Pessoa
if __name__ == "__main__":
    # Criando uma instância da classe Pessoa
    p = Pessoa("Josevaldo", 25)

    # Exibindo o nome e a idade
    print(f"\nNome: {p.get_nome()}")
    print(f"Idade: {p.get_idade()}")

    # Alterando o nome e a idade
    p.set_nome("Antonio")
    p.set_idade(27)

    # Exibindo os valores alterados
    print(f"\nNome: {p.get_nome()}")
    print(f"Idade: {p.get_idade()}")