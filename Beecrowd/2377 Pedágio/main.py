l, d = [int(_) for _ in input().split()]
k, p = [int(_) for _ in input().split()]

res = ((l // d) * p) + (l * k)

print(res)