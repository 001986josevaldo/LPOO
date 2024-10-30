# Definindo a classe base Forma
class Forma:
    def desenhar(self):
        print("Desenhando uma forma...")

# Subclasse Retangulo que herda de Forma
class Retangulo(Forma):
    def desenhar(self):
        super().desenhar()
        print("Desenhando um retângulo...")

# Subclasse Circulo que herda de Forma
class Circulo(Forma):
    def desenhar(self):
        print("Desenhando um círculo...")

# Criando instâncias de Retangulo e Circulo
r = Retangulo()
c = Circulo()

# Chamando os métodos desenhar de cada instância
r.desenhar()  # Saída: Desenhando um retângulo...
c.desenhar()  # Saída: Desenhando um círculo...