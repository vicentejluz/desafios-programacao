N = int(input())

for i in range(N):
  c = input()
  if c[0] == c[2]:
    cal = int(c[0]) * int(c[2])
  elif c[1].islower():
    cal = int(c[0]) + int(c[2])
  else:
    cal = int(c[2]) - int(c[0])
    
  print(cal)