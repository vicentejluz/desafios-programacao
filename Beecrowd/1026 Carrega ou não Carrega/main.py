while True:
    try:
        num1, num2 = [int(_) for _ in input().split()]
        print(num1 ^ num2)   
    except EOFError:
        break
