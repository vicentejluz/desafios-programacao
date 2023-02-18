cont = 0
media = 0
X = 0

while X >= 0:
  X = int(input())
  if X >= 0:
    media += X
    cont += 1
	
media /= cont
print("%0.2f" %media)