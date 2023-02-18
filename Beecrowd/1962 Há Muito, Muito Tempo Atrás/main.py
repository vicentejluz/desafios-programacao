n = int(input())

for _ in range(n):
    t = int(input())

    if t == 2014:
        print(f"{t - 2013} D.C.")
    elif t < 2014:
        print(f"{2015 - t} D.C.")
    else:
        print(f"{t - 2014} A.C.")