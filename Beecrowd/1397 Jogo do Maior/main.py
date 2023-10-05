N = 1
while N != 0:
  N = int(input())
  if N != 0:
    contA = 0
    contB = 0
    for i in range(N):
      entrada = [int(a) for a in input().split()]
      A = entrada[0]
      B = entrada[1]
      if A > B:
        contA += 1
      elif A < B:
        contB += 1
    print(f"{contA} {contB}")