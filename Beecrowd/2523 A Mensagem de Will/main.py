while True:
    try:
        pos = []
        std = input()
        n = int(input())
        entrada = [int(_) for _ in input().split()]
        pos = entrada[0:n + 1]

        for i in range(n):
            print(std[pos[i] - 1], end='')
        
        print()

    except EOFError:
        break