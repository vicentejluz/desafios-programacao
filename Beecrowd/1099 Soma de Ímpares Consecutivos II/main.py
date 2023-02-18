n = int(input())

for _ in range(n):
    x, y = [int(_) for _ in input().split()]

    soma = 0
    for i in range(min(x, y) + 1, max(x, y)):
        if i % 2 != 0:
            soma += i
    print(soma)
