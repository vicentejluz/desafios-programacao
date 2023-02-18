j = 0
N = int(input())
V = []

while(N > j):
  V = input()
  soma = 0
  for valor in V: #len() retorna tamanho do vetor
    if valor == "1":
      soma += 2
    elif valor == "7":
      soma += 3
    elif valor == "4":
      soma += 4
    elif valor == "2" or valor == "3" or valor == "5":
      soma += 5
    elif valor == "6" or valor == "9" or valor == "0":
      soma += 6
    else:
      soma += 7
  print(f"{soma} leds")
  j += 1