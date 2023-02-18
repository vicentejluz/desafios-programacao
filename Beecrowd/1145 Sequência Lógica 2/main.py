entrada = [int (a) for a in input().split()]
X = entrada[0]
Y = entrada[1]
aux = X
  
for i in range(1, Y + 1):
  if i < X:
    print(i, end=" ")
  else:
    print(i)
    X += aux