class Livro:
    def __init__(self, titulo, autor, ano):
        self.titulo = titulo
        self.autor = autor
        self.ano = ano

    def exibir(self):
        print(f"Titulo: {self.titulo} \nAutor: {self.autor}\
            \nLancamento: {self.ano}!")
# Criando uma instância da classe
p = Livro("LPOO", "Tanembaum", 2024)
# Chamando o método exibir
p.exibir()