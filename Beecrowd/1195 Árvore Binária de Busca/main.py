class No:
    def __init__(self, conteudo):
        self.conteudo = conteudo
        self.esq = self.dir = None


class ArvoreBinaria:
    def __init__(self):
        self.raiz = None
        self.tam = 0

    def inserir(self, conteudo):
        for valor in conteudo:
            novo_conteudo = No(valor)
            self.raiz = self.inserir_aux(self.raiz, novo_conteudo)
            self.tam += 1

    def inserir_aux(self, atual, novo_no):
        if atual is None:
            return novo_no
        elif novo_no.conteudo < atual.conteudo:
            atual.esq = self.inserir_aux(atual.esq, novo_no)
        else:
            atual.dir = self.inserir_aux(atual.dir, novo_no)
        return atual

    def pre_ordem(self):
        global cont
        cont = 0
        self.pre_ordem_aux(self.raiz)

    def pre_ordem_aux(self, atual):
        global cont
        if atual is not None:
            if (cont < self.tam - 1):
                print(f"{atual.conteudo} ", end="")
            else:
                print(f"{atual.conteudo}", end="")
            cont += 1
            self.pre_ordem_aux(atual.esq)
            self.pre_ordem_aux(atual.dir)

    def em_ordem(self):
        global cont
        cont = 0
        self.em_ordem_aux(self.raiz)

    def em_ordem_aux(self, atual):
        global cont
        if atual is not None:
            self.em_ordem_aux(atual.esq)
            if (cont < self.tam - 1):
                print(f"{atual.conteudo} ", end="")
            else:
                print(f"{atual.conteudo}", end="")
            cont += 1
            self.em_ordem_aux(atual.dir)

    def pos_ordem(self):
        global cont
        cont = 0
        self.pos_ordem_aux(self.raiz)

    def pos_ordem_aux(self, atual):
        global cont
        if atual is not None:
            self.pos_ordem_aux(atual.esq)
            self.pos_ordem_aux(atual.dir)
            if (cont < self.tam - 1):
                print(f"{atual.conteudo} ", end="")
            else:
                print(f"{atual.conteudo}", end="")
            cont += 1


if __name__ == '__main__':
    c = int(input())

    for i in range(c):
        n = int(input())

        arv = ArvoreBinaria()
        valores = [int(_) for _ in input().split()[:n]]
        arv.inserir(valores)

        print(f"Case {i + 1}:")
        print("Pre.: ", end="")
        arv.pre_ordem()

        print("\nIn..: ", end="")
        arv.em_ordem()

        print("\nPost: ", end="")
        arv.pos_ordem()
        print("\n")
