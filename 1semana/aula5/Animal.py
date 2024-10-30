# ------------ # Pai ----------------------------------------------
class Animal:
    totalAnimais = 0  # Atributo de classe
    totalHabitats = 0  # Atributo de classe
    habitats_registrados = set()  # Conjunto para armazenar habitats únicos

    def __init__(self, habitat):
        self.habitat = habitat  # Atributo para armazenar o habitat do animal
        Animal.totalAnimais += 1  # Incrementa o total de animais

        # Se o habitat ainda não foi registrado, incrementa totalHabitats
        if habitat not in Animal.habitats_registrados:
            Animal.habitats_registrados.add(habitat)
            Animal.totalHabitats += 1
    
    def __del__(self):
        Animal.totalAnimais -= 1  # Decrementa o total de animais ao excluir


    @classmethod
    def get_total_animais(cls):
        return cls.totalAnimais

    @classmethod
    def get_total_habitats(cls):
        return cls.totalHabitats
    
    def fazerSom(self):
        print("Som de animal genérico.")

# ------------- # Filho -------------------------------------------
class Reptil(Animal):
    quantidade = 0  # Atributo de classe para contar instâncias de répteis

    def __init__(self, habitat):
        super().__init__(habitat)
        Reptil.quantidade += 1  # Incrementa a quantidade de répteis

    def __del__(self):
        Reptil.quantidade -= 1  # Decrementa a quantidade ao excluir
        super().__del__()

    @classmethod
    def get_quantidade(cls):
        return cls.quantidade
    
    def fazerSom(self):
        print("Os répteis fazem som de réptil.")

class Anfibio(Animal):
    quantidade = 0  # Atributo de classe para contar instâncias de anfíbios

    def __init__(self, habitat):
        super().__init__(habitat)
        Anfibio.quantidade += 1

    def __del__(self):
        Anfibio.quantidade -= 1
        super().__del__()

    @classmethod
    def get_quantidade(cls):
        return cls.quantidade
    def fazerSom(self):
        print("OS ANFÍBIOS SÃO ANIMAIS VERTEBRADOS QUE NASCEM NA "
               "ÁGUA E SEDESENVOLVEM NA TERRA.")

class Peixe(Animal):
    quantidade = 0  # Atributo de classe para contar instâncias de peixes

    def __init__(self, habitat):
        super().__init__(habitat)
        Peixe.quantidade += 1

    def __del__(self):
        Peixe.quantidade -= 1
        super().__del__()

    @classmethod
    def get_quantidade(cls):
        return cls.quantidade
    def fazerSom(self):
        print("OS PEIXES SÃO ANIMAIS VERTEBRADOS QUE VIVEM NA ÁGUA. "
              "POSSUEM A PELE COBERTA POR ESCAMAS")

class Ave(Animal):
    quantidade = 0  # Atributo de classe para contar instâncias de aves

    def __init__(self, habitat):
        super().__init__(habitat)
        Ave.quantidade += 1

    def __del__(self):
        Ave.quantidade -= 1
        super().__del__()

    @classmethod
    def get_quantidade(cls):
        return cls.quantidade
    def fazerSom(self):
        print("AS AVES SÃO ANIMAIS VERTEBRADOS QUE POSSUEM PENA E "
              "CAPACIDADE DE VOAR. NASCEM DE OVOS.")

class Mamifero(Animal):

    quantidade = 0  # Atributo de classe para contar instâncias de mamíferos

    def __init__(self, habitat):
        super().__init__(habitat)
        Mamifero.quantidade += 1

    def __del__(self):
        Mamifero.quantidade -= 1
        super().__del__()

    @classmethod
    def get_quantidade(cls):
        return cls.quantidade
    def fazerSom(self):
        print("OS MAMÍFEROS SÃO ANIMAIS VERTEBRADOS AQUÁTICOS OU "
            "TERRESTRES. QUANDO FILHOTES SE ALIMENTAM DO LEITE DA MÃE.")

# ---------------- # Netos -------------------------------------

class Cobra(Reptil):
    def fazerSom(self):
        print("A cobra sibila.")

class Jacare(Reptil):
    def fazerSom(self):
        print("O jacaré faz som de réptil.")


class Sapo(Anfibio):
    def fazerSom(self):
        print("O sapo coa.")

'''# Exemplo de uso:
animais = [Cobra(), Jacare(), Sapo()]
for animal in animais:
    animal.fazerSom()'''

# Exemplo de uso
cobra1 = Cobra("pântano")
cobra2 = Cobra("pântano")
sapo = Sapo("lago")

print(f"Total de animais: {Animal.get_total_animais()}")
print(f"Total de habitats: {Animal.get_total_habitats()}")

print(f"Quantidade de répteis: {Reptil.get_quantidade()}")
print(f"Quantidade de cobras: {Cobra.get_quantidade()}")
print(f"Quantidade de anfíbios: {Anfibio.get_quantidade()}")
print(f"Quantidade de sapos: {Sapo.get_quantidade()}")

# Excluir um animal e verificar o impacto
del cobra1

print(f"Total de animais após exclusão: {Animal.get_total_animais()}")
print(f"Quantidade de cobras após exclusão: {Cobra.get_quantidade()}")