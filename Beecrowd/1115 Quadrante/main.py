X = 1
Y = 1
while X != 0 and Y != 0:
  entrada = [int(i) for i in input().split()]
  X = entrada[0]
  Y = entrada[1]
  if X != 0 and Y !=0:
    if X < 0  and Y < 0:
      print("terceiro")
    elif X < 0 and Y > 0:
      print("segundo")
    elif Y < 0 and X > 0:
      print("quarto")
    else:
      print("primeiro")