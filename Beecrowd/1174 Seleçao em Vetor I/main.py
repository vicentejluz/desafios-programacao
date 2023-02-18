a = []

for _ in range(100):
    a.append(float(input()))

for index, v in enumerate(a):
    if (v <= 10):
        print("A[%d] = %.1f" % (index, v))
