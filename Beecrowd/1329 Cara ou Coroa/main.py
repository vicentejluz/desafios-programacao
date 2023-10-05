while True:
    n = int(input())

    if n == 0:
        break

    cont0 = 0
    cont1 = 0

    l  = [int(_) for _ in input().split()[:n]]

    for i in range(n):
        if l[i] == 0:
            cont0 += 1
        elif l[i] == 1:
            cont1 += 1

    print(f"Mary won {cont0} times and John won {cont1} times")