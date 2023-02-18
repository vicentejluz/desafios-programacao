dia, mes, ano = input().split("/")

print("%02d/%02d/%02d" %(int(mes), int(dia), int(ano)))
print("%02d/%02d/%02d" %(int(ano), int(mes), int(dia)))
print("%02d-%02d-%02d" %(int(dia), int(mes), int(ano)))