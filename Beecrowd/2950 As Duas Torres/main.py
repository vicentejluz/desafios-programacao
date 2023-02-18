entrada = [int(a) for a in input().split()]
n = entrada[0]
x = entrada[1]
y = entrada[2]

res = n / (x + y)

print("%.2f" %res)