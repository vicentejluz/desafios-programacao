def fatorial(n):
    f = 1

    for i in range(n, 1, -1):
        f *= i

    return f


while True:
    try:
        m, n = (int(_) for _ in input().split())

        soma = fatorial(m) + fatorial(n)

        print(soma)

    except EOFError:
        break
