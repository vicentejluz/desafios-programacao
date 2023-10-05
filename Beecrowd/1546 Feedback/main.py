N = int(input())

for i in range(N):
  K = int(input())
  for j in range(K):
    num = int(input())
    if num == 1:
      print("Rolien")
    elif num == 2:
      print("Naej")
    elif num == 3:
      print("Elehcim")
    else:
      print("Odranoel")