Pos = 0
Neg = 0
Imp = 0
Par = 0
	
for i in range(5):
  X = int(input())
  if X < 0:
    Neg += 1
  elif X > 0:
    Pos += 1
  if X % 2 == 0:
    Par += 1
  else:
    Imp += 1
	
print("{} valor(es) par(es)".format(Par))
print("{} valor(es) impar(es)".format(Imp))
print("{} valor(es) positivo(s)".format(Pos))
print("{} valor(es) negativo(s)".format(Neg))