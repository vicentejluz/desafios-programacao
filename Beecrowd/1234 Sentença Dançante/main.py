while(True):
    try:
        s = input()
        x = 0
        for c in s:
            if x % 2 == 0:
                c = c.upper() 
            else:
                c = c.lower()
            if c != ' ':
                x += 1
            print(c, end='')
        print()
    except EOFError:
        break