soma = 0
cont = 0
N = int(input())

for i in range(N):
  entrada = [int(a) for a in input().split()]
  X = entrada[0]
  Y = entrada[1]
  j = X
  while(cont < Y):
    if j % 2 != 0:
      soma += j
      cont += 1
    j += 1     
  print(soma)
  soma = 0
  cont = 0