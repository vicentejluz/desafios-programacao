X = 1

while X != 0:
  X = int(input())
  if(X != 0):
    i = X
    cont = 0
    soma = 0
    while(cont < 5):
      if i % 2 == 0:
        soma += i
        cont += 1
      i += 1     
    print(soma)