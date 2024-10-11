class ContaBancaria:
    def __init__(self, nome, saldo_inicial):
        self.titular = nome
        self.saldo = saldo_inicial

    def exibir_saldo(self):
        print(f"Titular: {self.titular}, Saldo: {self.saldo}")

    def sacar(self, valor):
        if valor <= self.saldo:
            self.saldo -= valor
            print(f"Saque de {valor} BRL realizado com sucesso.")
        else:
            print(f"Saldo insuficiente para o saque de {valor} BRL.")

    def sacar_com_taxa_cambio(self, valor, taxa_cambio):
        valor_convertido = valor * taxa_cambio
        if valor_convertido <= self.saldo:
            self.saldo -= valor_convertido
            print(f"Saque de {valor_convertido} BRL realizado com sucesso.")
        else:
            print(f"Saldo insuficiente para o saque de {valor_convertido} BRL.")

    def sacar_com_tipo_operacao(self, valor, tipo_operacao):
        taxa = 0.05 if tipo_operacao == "credito" else 0.0
        valor_com_taxa = valor + (valor * taxa)
        if valor_com_taxa <= self.saldo:
            self.saldo -= valor_com_taxa
            print(f"Saque de {valor} BRL realizado com taxa de {valor * taxa} BRL.")
        else:
            print("Saldo insuficiente para o saque.")

# Teste da classe
if __name__ == "__main__":
    conta = ContaBancaria("Josevaldo", 5000.00)

    conta.exibir_saldo()
    conta.sacar(1000)
    conta.exibir_saldo()
    conta.sacar_com_taxa_cambio(1000, 5.4)
    conta.exibir_saldo()
    conta.sacar_com_tipo_operacao(1000, "credito")
    conta.exibir_saldo()