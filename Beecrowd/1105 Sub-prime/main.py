while True:
    B, N = [int(_) for _ in input().split()]

    if B == 0 and N == 0:
        break

    j = 0

    Vx = [0]

    Vx[1:] = [int(_) for _ in input().split()]

    for _ in range(N):
        D, C, V = [int(_) for _ in input().split()]

        Vx[D] -= V
        Vx[C] += V

    for i in range(1, B + 1):
        if Vx[i] < 0:
            j = 1

    if j == 1:
        print("N")
    else:
        print("S")
