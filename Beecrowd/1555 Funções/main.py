N = int(input())
lista = []

for i in range(N):
  entrada = [int(a) for a in input().split()]
  x = entrada[0]
  y = entrada[1]
    
  r = pow(3 * x, 2) + pow(y, 2)
  b = (2 * pow(x, 2)) + pow(5 * y, 2)
  c = (-100 * x) + pow(y, 3)

  lista.append(r)
  lista.append(b)
  lista.append(c) 

  if max(lista) == r:
    print("Rafael ganhou")
  elif max(lista) == b:
   print("Beto ganhou")
  else:
    print("Carlos ganhou")

  lista.remove(r)
  lista.remove(b)
  lista.remove(c)