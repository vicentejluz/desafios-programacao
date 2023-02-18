t = int(input())

for _ in range(t):
    n, k = [int(_) for _ in input().split()]

    if k > n:
        print(n)
    else:
        div = n // k
        mut = div * k
        sub = n - mut
        som = div + sub
        print(som)