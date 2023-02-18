h, z, l = [int(_) for _ in input().split()]

if (h > z and h < l) or (h < z and h > l):
    print("huguinho")
elif (z > h and z < l) or (z < h and z > l):
    print("zezinho")
else:
    print("luisinho")