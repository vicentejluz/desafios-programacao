Vp = []
Vi = []
P = 0
I = 0

for i in range(0, 15):
  X = int(input())
	
  if X % 2 == 0:
    Vp.insert(P, X)
    P += 1
    if P == 5:
      for j in range(0, 5):
        print(f"par[{j}] = {Vp[j]}")
      P = 0
  else:
    Vi.insert(I, X)
    I += 1
    if I == 5:
      for j in range(0, 5):
        print(f"impar[{j}] = {Vi[j]}")
      I = 0

for j in range(0, I):
  print(f"impar[{j}] = {Vi[j]}")
I = 0
				
for j in range(0, P):
  print(f"par[{j}] = {Vp[j]}")
P = 0