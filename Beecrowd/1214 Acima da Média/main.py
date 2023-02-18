c = int(input())

for _ in range(c):
    entrada = [int(_) for _ in input().split()]
    n = entrada[0]
    lista = entrada[1:n + 1]
    por = 100
    res = 0

    for c in lista:
        res += c
    
    med = res / n

    cout = len([x for x in lista if x > med])

    por *= (cout / n)

    print("%.3f%%" %por)