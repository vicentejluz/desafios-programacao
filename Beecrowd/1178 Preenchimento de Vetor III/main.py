N = []

X = float(input())
N.append(X)

for i in range(0, 100):
	N.append(N[i] / 2)
for i in range(0, 100):
	print("N[{}] = {:.4f}" .format(i, N[i]))