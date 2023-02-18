idade = int(input())

ano = idade / 365
mes = (idade % 365) / 30
dia = (idade % 365) % 30
	
print("{} ano(s)" .format(int(ano)))
print("{} mes(es)" .format(int(mes)))
print("{} dia(s)" .format(int(dia)))