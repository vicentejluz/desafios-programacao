def obterPosMenor(v):
    v_min = (min(v)) # pega o menor valor da lista
    pos = v.index(v_min) + 1 # Pega a posição do menor valor da lista
    
    return pos

n = int(input())
inp = input().split() # entrada para lista

v = []

# considera só as entradas que esta de acordo com valor maximo que é n
for i in range(n):
    v.append(inp[i]) # add na lista

print(obterPosMenor(v))