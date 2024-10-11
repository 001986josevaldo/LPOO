class Livro:
    def __init__(self, titulo, autor, ano):
        self.titulo = titulo
        self.autor = autor
        self.ano = ano

    def getTitulo(self):
        return self.titulo

    def getAutor(self):
        return self.autor

    def getAno(self):
        return self.ano

    def exibirInfo(self):
        print(f"Livro: {self.titulo} | Autor: {self.autor} | Ano: {self.ano}")


class Biblioteca:
    def __init__(self):
        self.livros = []

    def adicionarLivro(self, livro):
        self.livros.append(livro)

    def exibirLivros(self):
        print("Livros na Biblioteca:")
        for livro in self.livros:
            livro.exibirInfo()

    def remover_livro(self, titulo):
        for livro in self.livros:
            if livro.titulo.lower() == titulo.lower():
                self.livros.remove(livro)
                print(f'Livro "{titulo}" removido da biblioteca.')
                return
        print(f'Livro "{titulo}" não encontrado na biblioteca.')


# Função principal
if __name__ == "__main__":
    livro1 = Livro("1984", "George Orwell", 1949)
    livro2 = Livro("O Senhor dos Anéis", "J. R. R. Tolkien", 1954)
    
    biblioteca = Biblioteca()
    biblioteca.adicionarLivro(livro1)
    biblioteca.exibirLivros()

    print()  # Separador entre as exibições
    
    biblioteca.adicionarLivro(livro2)
    biblioteca.exibirLivros()
    # Removendo um livro
    biblioteca.remover_livro("1984")
    biblioteca.exibirLivros()