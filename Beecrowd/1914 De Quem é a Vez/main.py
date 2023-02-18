n = int(input())

for _ in range(n):

    a, b, c, d = [_ for _ in input().split()]
    n, m = [int(_) for _ in input().split()]
    
    jog = {}

    jog[b] = a
    jog[d] = c

    res = n + m

    if res % 2 == 0:
        escolha = "PAR"
    else:
        escolha = "IMPAR"

    # print(jog[escolha])

    for key in jog:
        if escolha == key:
            print(jog[key])