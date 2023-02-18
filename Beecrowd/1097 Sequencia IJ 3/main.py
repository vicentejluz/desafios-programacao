a = 7

for i in range(1, 10, 2):
  for b, j in zip(range(1, 4), range(a, -1, -1)):
    print(f"I={i} J={j}")
  a += 2