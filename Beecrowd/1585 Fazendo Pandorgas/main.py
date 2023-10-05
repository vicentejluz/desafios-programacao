N = int(input())

for i in range(N):
  entrada = [ int(a) for a in input().split()]
  x = entrada[0]
  y = entrada[1]

  cm = x * y // 2

  print(f"{cm} cm2")