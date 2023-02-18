def EPrimo(pX):
    for i in range(2, pX):
        if pX % i == 0:
            return 0
    return 1


N = int(input())

for i in range(0, N):
    X = int(input())
    if EPrimo(X):
        print(f"{X} eh primo")
    else:
        print(f"{X} nao eh primo")
