import java.util.ArrayList;

public class Biblioteca {
    private ArrayList<Livro> livros = new ArrayList<>();
    // Método para adicionar um livro à biblioteca
    public void adicionarLivro(Livro livro) {
        livros.add(livro);
    }
    // Método para exibir todos os livros na biblioteca
    public void exibirLivros() {
        System.out.println("Livros na Biblioteca:");
        for (Livro livro : livros) {
            livro.exibirInfo();
        }
    }
    // Método para remover um livro pelo título
    public void removerLivro(String titulo) {
        // Percorre a lista de livros para encontrar o livro com o título correspondente
        for (int i = 0; i < livros.size(); i++) {
            if (livros.get(i).getTitulo().equalsIgnoreCase(titulo)) {
                livros.remove(i);  // Remove o livro encontrado
                System.out.println("\nLivro \"" + titulo + "\" removido da biblioteca.\n");
                return;  // Encerra o método após remover
            }
        }
        System.out.println("\nLivro \"" + titulo + "\" não encontrado na biblioteca.\n");
    }
}