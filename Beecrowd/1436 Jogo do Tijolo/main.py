t = int(input())
i = 1

for _ in range(t):
    entrada = [int(_) for _ in input().split()]
    n = entrada[0]
    idade = entrada[1:n + 1]

    met = n // 2

    print(f"Case {i}: {idade[met]}")
    i += 1