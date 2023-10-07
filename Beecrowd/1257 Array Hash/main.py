n = int(input())

for _ in range(n):
    l = int(int(input()))
    soma = 0
    pA = 0
    elem = 0
    pE = 0
    for i in range(l):
        st = str(input())
        for j in range(len(st)):
            pA += ord(st[j].upper()) - 65
            elem += i
            pE += j

        soma = pA + elem + pE
    
    print(soma)