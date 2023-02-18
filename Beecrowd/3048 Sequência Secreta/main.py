n = int(input())

vet = []

cont = 1

for _ in range(n):
    vet.append(int(input()))

for i in range(1, n):
    if vet[i] != vet[i - 1]:
        cont += 1

print(cont)