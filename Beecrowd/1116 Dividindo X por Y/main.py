N = int(input())

for i in range(N):
  entrada = [int(a) for a in input().split()]
  X = entrada[0]
  Y = entrada[1]
  if Y == 0:
    print("divisao impossivel")
  else:
    D = X / Y
    print("%0.1f" %D)