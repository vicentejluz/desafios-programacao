res = 0
cont = 0
while(True):
  try:
    nome = input()
    dis = int(input())

    res += dis

    cont += 1
  except EOFError:
    med = res / cont
    print("%.1f" %med)
    break