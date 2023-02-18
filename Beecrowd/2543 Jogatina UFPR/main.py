while True:
    try:
        n, u = [int(_) for _ in input().split()]
        cont = 0
        for _ in range(n):

            i, j = [int(_) for _ in input().split()]
            if i == u and j == 0:
                cont += 1
        print(cont)
    except EOFError:
        break