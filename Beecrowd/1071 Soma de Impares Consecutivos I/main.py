X = int(input())
Y = int(input())

cont = 0

if X > Y:
  max = X
  min = Y
else:
  max = Y
  min = X

for i in range(min + 1, max):
  if i % 2 == 1 or i % 2 == -1:
    cont += i
print(cont)