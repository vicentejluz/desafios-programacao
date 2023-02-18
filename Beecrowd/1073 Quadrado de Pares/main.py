n = int(input())

for i in range(1, n + 1):
    if i % 2 == 0:
        x = pow(i, 2)
        print(f"{i}^2 = {x}")