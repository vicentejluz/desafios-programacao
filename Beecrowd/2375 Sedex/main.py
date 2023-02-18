n = int(input())
a, l, p = [int(_) for _ in input().split()]

if n > a or n > l or n > p:
    print("N")
else:
    print("S")