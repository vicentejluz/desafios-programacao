import math

def EPrimo(pX):
  if pX % 2 == 0 and pX > 2:
    return False
  else:
    raiz = math.sqrt(pX)
    for i in range(3, int(raiz + 1), 2):
      if pX % i == 0:
        return False
  return 1
	
N = int(input())

for i in range(0, N):
  X = int(input())
  if EPrimo(X):
    print("Prime")
  else:
    print("Not Prime")