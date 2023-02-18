s, t, f = [int(_) for _ in input().split()]

res = s + t + f

if res > 23:
    res -= 24
elif res < 0:
    res += 24

print(res)