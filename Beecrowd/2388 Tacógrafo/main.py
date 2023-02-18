res = 0
n = int(input())

for i in range(n):
    entrada = [int(a) for a in input().split()]
    t = entrada[0]
    v = entrada[1]
    res += t * v

print(res)