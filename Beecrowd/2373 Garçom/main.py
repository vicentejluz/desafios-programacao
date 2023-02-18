res = 0

n = int(input())

for _ in range(n):
    l, c = [int(_) for _ in input().split()]

    if l > c:
        res += c

print(res)