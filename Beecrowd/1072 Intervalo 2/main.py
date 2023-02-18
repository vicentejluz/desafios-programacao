inp, out = 0, 0

n = int(input())

for i in range(n):
    x = int(input())

    if x >= 10 and x <= 20:
        inp += 1
    else:
        out += 1

print(f"{inp} in")
print(f"{out} out")