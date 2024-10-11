public class Pessoa{
    private String nome;
    private int idade;

    // construtor
    public Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }
    public void setNome(String nome){
        this.nome = nome;
    }
    public String getNome(){
        return this.nome;
    }
    public void setIdade(int idade){
        this.idade = idade;
    }
    public int getIdade(){
        return this.idade;
    }
    public static void main(String[] args){

        Pessoa p = new Pessoa("Josevaldo", 25);

        System.out.println("\nNome: " + p.getNome());
        System.out.println("Idade: "+ p.getIdade());


        p.setNome("Antonio");
        p.setIdade(27);

        System.out.println("\nNome: " + p.getNome());
        System.out.println("Idade: "+ p.getIdade());
    }
}