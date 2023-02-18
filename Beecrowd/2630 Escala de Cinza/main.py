t = int(input())
i = 1

for _ in range(t):
    std = input()
    lista = [int(_) for _ in input().split()]

    if std == "max":
        p = max(lista)
    elif std == "min":
        p = min(lista)
    elif std == "mean":
        p = (lista[0] + lista[1] + lista[2]) // 3
    else:
        p = int((lista[0] * 0.3) + (lista[1] * 0.59) + (lista[2] * 0.11))
    
    print(f"Caso #{i}: {p}")

    i += 1