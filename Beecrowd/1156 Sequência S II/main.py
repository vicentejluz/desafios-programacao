S = 1
aux2 = 1

for i in range(3, 40):
  if i % 2 != 0:
    aux2 *= 2
    aux = i / aux2
    S += aux
print("%.2lf" %S)