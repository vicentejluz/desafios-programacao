while(True):
    try:
        m, n = [int(_) for _ in input().split()]

        if m == 0 and n == 0:
            break

        res = m + n

        std = str(res)

        for c in std:
            if c == '0':
               std = std.replace(c, '') # tirou os caracteres 0 da string

        print(std)
    
    except EOFError:
        break