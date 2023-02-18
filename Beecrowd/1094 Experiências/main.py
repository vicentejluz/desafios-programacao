N = int(input())
somaC = 0 
somaR = 0
somaS = 0

for i in range(N):
  entrada = [str(a) for a in input().split()]
  quantia = int(entrada[0])
  tipo = entrada[1]
  if tipo == 'C':
    somaC += quantia
  elif tipo == 'R':
    somaR += quantia
  elif tipo == 'S':
    somaS += quantia
  
totalCobaia = somaC + somaR + somaS
porC = (float)(100 * somaC) / totalCobaia
porR = (float)(100 * somaR) / totalCobaia
porS = (float)(100 * somaS) / totalCobaia

print(f"Total: {totalCobaia} cobaias")
print(f"Total de coelhos: {somaC}")
print(f"Total de ratos: {somaR}")
print(f"Total de sapos: {somaS}")
print("Percentual de coelhos: {:.2f} %".format(porC))
print("Percentual de ratos: {:.2f} %" .format(porR))
print("Percentual de sapos: {:.2f} %" .format(porS))