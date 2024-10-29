

public class Carro {
    private String modelo;
    private int ano;
    private boolean ligado;

    // Construtor
    public Carro(String modelo, int ano) {
        this.modelo = modelo;
        this.ano = ano;
        this.ligado = false;
    }

    // Método para ligar o carro
    public void ligar() {
        ligado = true;
    }

    // Método para desligar o carro
    public void desligar() {
        ligado = false;
    }

    // Método para imprimir os detalhes do carro
    public String toString() {
        return new String("Modelo: " + this.modelo
                        + "\nAno: " + this.ano
                        + "\nLigado = " + this.ligado);
    }
    
    public static void main(String[] args) {
        Carro c = new Carro("UNO", 2005);
        System.out.println(c);
        c.ligar();
        System.out.println(c);
        c.desligar();
        System.out.println(c);
    }
}