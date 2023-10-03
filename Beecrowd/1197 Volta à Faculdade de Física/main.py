while(True):
  try:
    entrada = [int(i) for i in input().split()]
    v = entrada[0]
    t = entrada[1]
    dobro = (v * t) * 2
    print(dobro)
  except EOFError:
    break