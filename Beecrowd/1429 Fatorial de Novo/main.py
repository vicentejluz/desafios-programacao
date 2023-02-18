def fatorial(n):
    if n == 0:
        return 1
    return fatorial(n - 1) * n

while(True):
    num = input()

    if num == "0":
        break
    
    vet = []
    res = 0
    tam = len(num)

    for i in range(tam, 0, -1):
        vet.append(fatorial(i))
    
    for i in range(tam):
        res += int(num[i]) * vet[i]
    
    print(res)
