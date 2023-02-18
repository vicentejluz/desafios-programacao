Par = 0

for i in range(5):
  X = int(input())
  if X % 2 == 0:
    Par += 1
	
print("{} valores pares".format(Par))