while(True):
    try:
        a, b, c = [int(_) for _ in input().split()]

        if a == b and b == c:
            print("*")
        elif a != b and a != c:
            print("A")
        elif b != c and b != a:
            print("B")
        else:
            print("C")
    except EOFError:
        break