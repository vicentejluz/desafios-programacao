al = 0
gas = 0
diesel = 0
X = 1
	
while X != 4:
  X = int(input())
  if X == 1:
    al += 1
  if X == 2:
    gas +=1
  if X == 3:
    diesel += 1
				
print("MUITO OBRIGADO")
print("Alcool: {}".format(al))
print("Gasolina: {}".format(gas))
print("Diesel: {}".format(diesel))