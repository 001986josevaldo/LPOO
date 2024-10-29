public class Pessoa {
    // Atributos da classe
    public String nome;
    public int idade;

    // Método para dizer "Olá"
    public void dizerOla() {
        System.out.println("Oii, meu nome e " 
        + nome + " e tenho " + idade + " anos!");
    }
    public static void main(String[] args) {
        // Instância da classe Pessoa
        Pessoa p = new Pessoa();

        // Atribuição de valores
        p.nome = "Josevaldo";
        p.idade = 25;

        // Chamada do método para dizer "Olá"
        p.dizerOla();
    }
}