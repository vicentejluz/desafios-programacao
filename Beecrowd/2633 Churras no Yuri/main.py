while(True):
    try:
        x = 0
        n = int(input())
        dict = {}
        for _ in range(n):
            s, v = [a for a in input().split()]
            dict[int(v)] = s

            s = ""
            v = ""
        
        for i in sorted(dict.keys()):
            if x < (n - 1):
                print(dict[i], end=" ")
            else:
                print(dict[i])
            x += 1

    except EOFError:
        break