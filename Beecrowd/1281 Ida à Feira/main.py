n = int(input())

for _ in range(n):
    m = int(input())

    produtos = []
    precos = []
    total = 0
    for j in range(m):
        entrada = [str(_) for _ in input().split()]
        produtos.append(entrada[0])
        precos.append(float(entrada[1]))

    p = int(input())

    produtosComprados = []
    quantidades = []
    for j in range(p):
        entrada = [str(_) for _ in input().split()]
        produtosComprados.append(entrada[0])
        quantidades.append(int(entrada[1]))
        for k in range(m):
            if (produtosComprados[j] == produtos[k]):
                total += precos[k] * quantidades[j]

    print("R$ %.2f" % total)
