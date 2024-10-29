public class Livro {
    // Atributos da classe
    public String titulo;
    public String autor;
    public int ano;
    // Método para exibir
    public void exibir() {
        System.out.println("Titulo: " 
        + titulo + "\nAutor:" + autor 
        + "\nAno de Lancamento:" + ano);
    }
    public static void main(String[] args) {
        // Instância da classe
        Livro l = new Livro();

        // Atribuição de valores
        l.titulo = "LPOO";
        l.autor = "Tanembaum";
        l.ano = 2024;

        // Chamada do método para exibir
        l.exibir();
    }
}
