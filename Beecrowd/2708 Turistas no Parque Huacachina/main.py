saida, volta, contS, contV = 0, 0, 0, 0 
res = []

while(True):
    entrada = [_ for _ in input().split()] # Usar quando não tem limite min e max de entradas

    if entrada[0] == "ABEND":
        break
        
    if entrada[0] == "SALIDA":
        saida += int(entrada[1])
        contS += 1
    else:
        volta += int(entrada[1])
        contV += 1

res.append(saida - volta)
res.append(contS - contV)

print(res[0])
print(res[1])