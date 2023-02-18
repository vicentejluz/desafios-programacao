N = int(input())

for i in range(N):
  X = int(input())
	
  if X == 0:
    print("NULL")
  if X < 0:
    if X % 2 == 0:
      print("EVEN NEGATIVE")
    else:
      print("ODD NEGATIVE")
		
  if X > 0:
    if X % 2 == 0:
      print("EVEN POSITIVE")
    else:
      print("ODD POSITIVE")