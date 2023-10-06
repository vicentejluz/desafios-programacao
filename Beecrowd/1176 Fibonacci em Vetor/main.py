j = 0
T = int(input())

while T > j:
  N = int(input())
  ant = 0 
  prox = 1

  for i in range(N + 1):
    if i < 2:
      fibonacci = ant + i
    else:
      fibonacci = ant + prox
      ant = prox
      prox = fibonacci
  print(f"Fib({N}) = {fibonacci}")
  j += 1