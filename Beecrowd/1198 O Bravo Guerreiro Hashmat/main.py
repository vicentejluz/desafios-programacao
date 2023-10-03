while(True):
  try:
    entrada = [int(i) for i in input().split()]
    H = entrada[0]
    O = entrada[1]
    sub = H - O
    if sub < 0:
      sub *= -1
    print(sub)
  except EOFError:
    break