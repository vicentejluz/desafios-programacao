V = 50
j = 0
while(V >= 50):
  V = int(input())

N = [] 
N.append(V)
for i in range(1, 10):
	N.append(N[i - 1] * 2)
for valor in N:
  print(f"N[{j}] = {valor}")
  j += 1