n, m = [int(_) for _ in input().split()]

for _ in range(m):
    str = input()

    if str == "fechou":
        n += 1
    else:
        n -= 1
print(n)