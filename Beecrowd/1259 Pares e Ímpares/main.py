vP = []
vI = []

vezes = int(input()) 
for i in range(vezes):
  N = int(input())
  if N % 2 == 0:
    vP.append(N)
  else:
    vI.append(N)

vP.sort()
vI.sort(reverse=True)

for vPOrd in vP:
  print(vPOrd)

for vIOrdDes in vI:
  print(vIOrdDes)