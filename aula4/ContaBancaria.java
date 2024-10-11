class ContaBancaria {
    private String titular;
    private double saldo;

    public ContaBancaria(String nome, double saldoInicial) {
        this.titular = nome;
        this.saldo = saldoInicial;
    }

    public void exibirSaldo() {
        System.out.println("Titular: " + titular + ", Saldo: " + saldo);
    }

    public void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            System.out.println("Saque de " + valor + " BRL realizado com sucesso.");
        } else {
            System.out.println("Saldo insuficiente para o saque de " + valor + " BRL.");
        }
    }

    public void sacar(double valor, double taxaCambio) {
        double valorConvertido = valor * taxaCambio;
        if (valorConvertido <= saldo) {
            saldo -= valorConvertido;
            System.out.println("Saque de " + valorConvertido + " BRL realizado com sucesso.");
        } else {
            System.out.println("Saldo insuficiente para o saque de " + valorConvertido + " BRL.");
        }
    }

    public void sacar(double valor, String tipoOperacao) {
        double taxa = tipoOperacao.equals("credito") ? 0.05 : 0.0;
        double valorComTaxa = valor + (valor * taxa);
        if (valorComTaxa <= saldo) {
            saldo -= valorComTaxa;
            System.out.println("Saque de " + valor + " BRL realizado com taxa de " + (valor * taxa) + " BRL.");
        } else {
            System.out.println("Saldo insuficiente para o saque.");
        }
    }

    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria("Josevaldo", 5000.00);

        conta.exibirSaldo();
        conta.sacar(1000);
        conta.exibirSaldo();
        conta.sacar(1000, 5.4);
        conta.exibirSaldo();
        conta.sacar(1000, "credito");
        conta.exibirSaldo();
    }
}