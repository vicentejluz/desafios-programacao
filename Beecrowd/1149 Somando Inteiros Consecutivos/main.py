entrada = [int(_) for _ in input().split()]

a = entrada[0]
n = entrada[-1]

i = a
soma = 0

for _ in range(n):
    soma += i
    i += 1

print(soma)
