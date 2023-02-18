X = float(input())
	
if X >= 0 and X <= 2000:
  print("Isento")

elif X <= 3000:
  imposto = (X - 2000) * 0.08
  print("R$ %0.2f" %imposto)

elif X <= 4500:
  imposto = (X - 3000) * 0.18 + 80
  print("R$ %0.2f" %imposto)

else:
  imposto = (X - 4500) * 0.28 + 350
  print("R$ %0.2f" %imposto)