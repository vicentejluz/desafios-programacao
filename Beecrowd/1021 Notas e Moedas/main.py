notas = float(input())
n = int(notas)
moedas = int((notas - n) * 100)

if (moedas * 1000) % 10 == 9:
    moedas += 1

print("NOTAS:")
print("{} nota(s) de R$ 100.00".format(int(n / 100)))
aux = int(n % 100)

print("{} nota(s) de R$ 50.00".format(int(aux / 50)))
aux = int(aux % 50)

print("{} nota(s) de R$ 20.00".format(int(aux / 20)))
aux = int(aux % 20)

print("{} nota(s) de R$ 10.00".format(int(aux / 10)))
aux = int(aux % 10)

print("{} nota(s) de R$ 5.00".format(int(aux / 5)))
aux = int(aux % 5)

print("{} nota(s) de R$ 2.00".format(int(aux / 2)))
aux = int(aux % 2)

print("MOEDAS:")
print("{} moeda(s) de R$ 1.00".format(int(aux)))
moedas = int(moedas % 100)

print("{} moeda(s) de R$ 0.50".format(int(moedas / 50)))
moedas = int(moedas % 50)

print("{} moeda(s) de R$ 0.25".format(int(moedas / 25)))
moedas = int(moedas % 25)

print("{} moeda(s) de R$ 0.10".format(int(moedas / 10)))
moedas = int(moedas % 10)

print("{} moeda(s) de R$ 0.05".format(int(moedas / 5)))
moedas = int(moedas % 5)

print("{} moeda(s) de R$ 0.01".format(int(moedas / 1)))
