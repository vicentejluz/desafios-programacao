cont = 0
N = int(input())

for i in range(N):
    C = float(input())
    div = C / 2
    if div >= 1:
        cont = 1
    while div > 1:
        div /= 2
        cont +=1
    print(f"{cont} dias")