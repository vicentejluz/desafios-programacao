while True:
    try:
        notas = []
        pos = []
        n, q = [int(_) for _ in input().split()]
        
        for _ in range(n):
            notas.append(int(input()))

        for _ in range(q):
            pos.append(int(input()) - 1)

        notas = sorted(notas, reverse=True)

        for i in range(q):
            print(notas[pos[i]])

    except EOFError:
        break