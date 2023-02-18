N = int(input())
ant = 0 
prox = 1

for i in range(N):
  if i < 2:
    fibonacci = ant + i
  else:
    fibonacci = ant + prox
    ant = prox
    prox = fibonacci
  if i < N - 1:
    print(fibonacci, end=" ")
  else: 
    print(fibonacci)