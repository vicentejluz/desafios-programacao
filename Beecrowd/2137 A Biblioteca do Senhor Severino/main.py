while True:
    try:
        n = int(input())

        cod = []

        for _ in range(n):
            cod.append(int(input()))

        cod.sort()

        for c in cod:
            print("%04d" % c)
    except EOFError:
        break
