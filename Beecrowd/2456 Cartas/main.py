a, b, c, d, e = [int(_) for _ in input().split()]

if a < b and b < c and c < d and d < e:
    print("C")
elif a  > b and b > c and c > d and d > e:
    print("D")
else:
    print("N")