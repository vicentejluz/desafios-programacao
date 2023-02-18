N = int(input())
F = 1

for i in range(N):
  F *= (N - i)
    
print(F)