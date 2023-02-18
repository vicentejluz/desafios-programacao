N = int(input())
soma = 0

for i in range(N):
  X = int(input())
  for j in range(1, X):
    if X % j == 0:
      soma += j
  if soma == X:
    print(f"{X} eh perfeito")
  else:
    print(f"{X} nao eh perfeito")
  soma = 0