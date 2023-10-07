class HashTable:
    def __init__(self, tam):
        self.tam = tam
        self.tab = [[] for _ in range(tam)]

    def funcao_hash(self, valor):
        return valor % self.tam
    
    def inserir_valor(self, valor):
        self.pos = self.funcao_hash(valor)
        list = self.tab[self.pos]
        list.append(valor)
    
    def imprimir_hash(self):
        for i, h in enumerate(self.tab):
            print(f"{i} -> ", end="")
            if not h:
                print("\\")
            else:
                for j, valor in enumerate(h):
                    if j < len(h) - 1:
                        print(f"{valor} -> ", end="")
                    else:
                        print(f"{valor} -> \\", end="")
                print()

if __name__ == '__main__':
    n = int(input())

    for i in range(n):
        entrada = [int(_) for _ in input().split()]
        m = entrada[0]
        c = entrada[1]

        tab = HashTable(m)

        valores = [int(_) for _ in input().split()[:c]]

        for j in range(c):
            tab.inserir_valor(valores[j])

        if(i > 0):
            print()

        tab.imprimir_hash()
