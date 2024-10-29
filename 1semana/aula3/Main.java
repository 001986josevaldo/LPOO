public class Main {
    public static void main(String[] args) {
        Livro livro1 = new Livro("1984", "George Orwell", 1949);
        Livro livro2 = new Livro("O Senhor dos Aneis", "J. R. R. Tolkien", 1954);

        Biblioteca biblioteca = new Biblioteca();
        biblioteca.adicionarLivro(livro1);
        biblioteca.exibirLivros();

        System.out.println(); // Separador entre as exibições

        biblioteca.adicionarLivro(livro2);
        biblioteca.exibirLivros();
        // Remover o livro "1984"
        biblioteca.removerLivro("1984");
        biblioteca.exibirLivros();
    }
}
