b = int(input())
g = int(input())

res = (g // 2) - b # Divisão com (//) para retornar um numero inteiro

if res <= 0:
    print("Amelia tem todas bolinhas!")
else:
    print(f"Faltam {res} bolinha(s)")