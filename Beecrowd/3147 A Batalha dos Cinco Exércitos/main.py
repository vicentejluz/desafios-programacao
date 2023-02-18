h, e, a, o, w, x = [int(_) for _ in input().split()]

alianca = h + e + a + x
inimigo = o + w

if alianca >= inimigo:
    print("Middle-earth is safe.")
else:
    print("Sauron has returned.")