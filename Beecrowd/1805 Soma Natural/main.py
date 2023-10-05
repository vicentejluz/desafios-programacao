entrada = [int(i) for i in input().split()]
A = entrada[0]
B = entrada[1]

soma = (A + B) * (B - A + 1) // 2

print(soma)