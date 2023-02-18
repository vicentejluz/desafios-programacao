A = 11
B = 11
while A < 0 or A > 10:
  A = float(input())
  if A < 0 or A > 10:
    print("nota invalida")
	
while B < 0 or B > 10:
  B = float(input())
  if B < 0.0 or B > 10.0:
    print("nota invalida")

media = (A + B) / 2
print("media = %0.2f" %media)