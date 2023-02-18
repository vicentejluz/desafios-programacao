cont = 0 
soma = 0

X = int(input())

# uma forma de fazer do while
while True:    
  Z = int(input())
  if Z > X:
    break

i = X
while soma <= Z:
  soma += i
  cont += 1
  i += 1
    
print(cont)