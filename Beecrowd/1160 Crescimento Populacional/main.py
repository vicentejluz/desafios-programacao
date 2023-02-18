T = int(input())

for i in range(T):
  j = 0
  entrada = input().split()
  PA = int(entrada[0])
  PB = int(entrada[1])
  G1 = float(entrada[2])
  G2 = float(entrada[3])
        
  while PA <= PB:
    PA += int((PA * (G1 / 100)))
    PB += int((PB * (G2 / 100)))
    j += 1
            
    if j > 100:
      print("Mais de 1 seculo.")
      break

  if j <= 100:
    print("{} anos.".format(j))