VI = 0
VG = 0
Emp = 0
i = 0
Grenal = 1

while Grenal == 1:
  entrada = [int(i) for i in input().split()]
  I = entrada[0]
  G = entrada[1]
  print("Novo grenal (1-sim 2-nao)")
  Grenal = int(input())
  if I > G:
    VI += 1
  elif G > I:
    VG += 1
  else:
    Emp += 1

  i += 1
	
print("{} grenais".format(i))
print("Inter:{}".format(VI))
print("Gremio:{}".format(VG))
print("Empates:{}".format(Emp))
if VI > VG:
  print("Inter venceu mais")
elif VG > VI:
  print("Gremio venceu mais")
else:
  print("Nao houve vencedor")