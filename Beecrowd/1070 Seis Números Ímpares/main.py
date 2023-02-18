X = int(input())

qte = 0

while True:
  if X % 2 != 0:
    qte += 1
    print(X)

  X += 1

  if qte == 6 :
    break