M = [[0,0,0,0,0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0,0,0,0,0],
     [0,0,0,0,0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0,0,0,0,0],
     [0,0,0,0,0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0,0,0,0,0],
     [0,0,0,0,0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0,0,0,0,0],]
soma = 0
media = 0
TAM = 12
T = 's'

L = int(input())

while T != 'S' and T != 'M':
  T = input()

for i in range(TAM):
  for j in range(TAM):
    M[i][j] = float(input())
  
for j in range(TAM):
  soma += M[L][j]

media = soma / TAM

if T == 'S':
  print("%.1lf" %soma)
else:
  print("%.1lf" %media) 