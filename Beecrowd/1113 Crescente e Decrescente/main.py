X = 1
Y = 0
while X != Y:
  entrada = [int(i) for i in input().split()]
  X = entrada[0]
  Y = entrada[1]
  if X > Y:
    print("Decrescente")
  elif X < Y:
    print("Crescente")