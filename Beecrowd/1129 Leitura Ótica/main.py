def obtemPosMenor(a, b, c, d, e):
    v = [a, b, c, d, e]

    menor = min(v)
    posMenor = v.index(menor)

    return posMenor


while True:
    n = int(input())
    
    if n == 0:
        break

    for _ in range(n):
        cont = 0
        a, b, c, d, e = [int(_) for _ in input().split()]

        if a > 127 and b > 127 and c > 127 and d > 127 and e > 127:
            cont = 2
        if a <= 127:
            cont += 1
        if b <= 127:
            cont += 1
        if c <= 127:
            cont += 1
        if d <= 127:
            cont += 1
        if e <= 127:
            cont += 1

        if cont > 1:
            print("*")
        else:
            posMenor = obtemPosMenor(a, b, c, d, e)
            if posMenor == 0:
                print("A")
            elif posMenor == 1:
                print("B")
            elif posMenor == 2:
                print("C")
            elif posMenor == 3:
                print("D")
            else:
                print("E")