maior = 0
cont = 0
for i in range(1, 101):
  X = int(input())
  if i == 0:
    maior = X
  else:
    if X > maior:
      maior = X
      cont = i

print(maior)
print(cont)