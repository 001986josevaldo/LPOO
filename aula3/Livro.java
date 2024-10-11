public class Livro {
    private String titulo;
    private String autor;
    private int ano;
    // Construtor
    public Livro(String titulo, String autor, int ano) {
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
    }
    // Método para obter o título
    public String getTitulo() {return titulo;}
    // Método para obter o autor
    public String getAutor() {return autor;}
    // Método para obter o ano de publicação
    public int getAno() {return ano;}
    // Método para exibir as informações do livro
    public void exibirInfo() {
        System.out.println("\nLivro: " + this.titulo);
        System.out.println("Autor: " + this.autor);
        System.out.println("Ano de publicacao: " + this.ano);
    }
}
