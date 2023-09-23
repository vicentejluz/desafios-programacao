def cont_kilo(frutas, i):
    for f in frutas:
        if f == ' ':
            contKilo[i] += 1
    return contKilo[i]


contPreco = cont = 0
frutas = []
contKilo = []

n = int(input())


for i in range(n):
    preco = float(input())
    frutas = [str(_) for _ in input()]
    contPreco += preco
    contKilo.append(1)

    cont += cont_kilo(frutas, i)
    print(f"day {i + 1}: {contKilo[i]} kg")


mediaPreco = contPreco / n

mediaKiloDia = cont / n

print("%.2lf kg by day" % mediaKiloDia)
print("R$ %.2lf by day" % mediaPreco)
