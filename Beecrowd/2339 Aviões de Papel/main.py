c, p, f = [int(_) for _ in input().split()]

res = c * f

if res <= p:
    print("S")
else:
    print("N")