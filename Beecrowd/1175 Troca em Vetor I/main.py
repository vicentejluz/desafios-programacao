N = []
j = 0

for i in range(0, 20):
  N.append(input())

for i in range(19, -1, -1):
  print(f"N[{j}] = {N[i]}")
  j += 1