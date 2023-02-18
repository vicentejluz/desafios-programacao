entrada = input().split()
codigop1 = int(entrada[0])
qtd1 = int(entrada[1])
valor1 = float(entrada[2])

entrada1 = input().split()
codigop2 = int(entrada1[0])
qtd2 = int(entrada1[1])
valor2 = float(entrada1[2])

total = (qtd1 * valor1) + (qtd2 * valor2)

print("VALOR A PAGAR: R$ %0.2f" %total)