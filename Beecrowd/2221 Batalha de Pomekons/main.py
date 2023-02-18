t = int(input())

for _ in range(t):
    b = int(input())
    jog1 = [int(_) for _ in input().split()]
    jog2 = [int(_) for _ in input().split()]

    if jog1[2] % 2 == 0:
        res1 = ((jog1[0] + jog1[1]) / 2) + b
    else:
        res1 = (jog1[0] + jog1[1]) / 2

    if jog2[2] % 2 == 0:
        res2 = ((jog2[0] + jog2[1]) / 2) + b
    else:
        res2 = (jog2[0] + jog2[1]) / 2

    if res1 == res2:
        print("Empate")
    elif res1 > res2:
        print("Dabriel")
    else:
        print("Guarte")