n, s = [int(_) for _ in input().split()]

menor = s
sum = s

for _ in range(n):
    s = int(input())
    sum += s
    if sum < menor:
        menor = sum

print(menor)