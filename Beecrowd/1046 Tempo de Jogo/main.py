x, y = [int(_) for _ in input().split()]

if x == y:
    print("O JOGO DUROU 24 HORA(S)")

if x > y:
    t = 24 - x + y
    print(f"O JOGO DUROU {t} HORA(S)")

if x < y:
    t = y - x
    print(f"O JOGO DUROU {t} HORA(S)")
