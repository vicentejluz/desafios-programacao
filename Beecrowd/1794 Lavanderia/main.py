n = int(input())
la, lb = [int(_) for _ in input().split()]
sa, sb = [int(_) for _ in input().split()]


if (n >= la and n <= lb) and (n >= sa and n <= sb):
    print("possivel")
else:
    print("impossivel")