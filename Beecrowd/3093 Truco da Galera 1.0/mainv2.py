n = int(input())

for _ in range(n):
    str = input()

    if ('Q' in str) and ('J' in str) and ('K' in str) and ('A' in str): # verifica sem tem esses caracteres na string str
        print("Aaah muleke")
    else:
        print("Ooo raca viu")