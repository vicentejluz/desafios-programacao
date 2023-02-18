while(True):
    entrada = [int(a) for a in input().split()]
    M = entrada[0]
    N = entrada[1]
    soma = 0
        
    if M <= 0 or N <= 0:
        break

    if M > N:
        aux = M
        M = N
        N = aux

    for i in range(M, N + 1):
        soma += i
        print(i, end = ' ')
    print("Sum={}".format(soma))