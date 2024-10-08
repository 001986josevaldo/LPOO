public class Carro {
    // Atributos da classe
    public String modelo;
    public int ano;

    // Método para dizer "Olá"
    public void dizerOla() {
        System.out.println("Oii, meu carro e " 
        + modelo + " e fabricado em " + ano);
    }
    public static void main(String[] args) {
        // Instância da classe Pessoa
        Carro c = new Carro();

        // Atribuição de valores
        c.modelo = "Gol";
        c.ano = 2023;

        // Chamada do método para dizer "Olá"
        c.dizerOla();
    }
}