L, R = 1, 1

while L != 0 or R != 0:
  entrada = [int(i) for i in input().split()]
  L = entrada[0]
  R = entrada[1]
  if L != 0 or R != 0:
    soma = L + R
    print(soma)