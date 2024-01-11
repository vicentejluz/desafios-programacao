k, n = [int(_) for _ in input().split()]

nome = []

for i in range(k):
    nome.append(str(input()))

nome.sort()

print(nome[n - 1])