N = int(input())
	
for i in range(N):
  entrada = [float(a) for a in input().split()]
  n1 = entrada[0]
  n2 = entrada[1]
  n3 = entrada[2]
  media = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5)
  print("%0.1f" %media)