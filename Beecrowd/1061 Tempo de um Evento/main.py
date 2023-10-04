entrada = [str(_) for _ in input().split()]
dia_inicial = str(entrada[0])
dia_i = int(entrada[1])

entrada = [int(_) for _ in input().split(" : ")]
hora_inicial = int(entrada[0])
minuto_inicial = int(entrada[1])
segundo_inicial = int(entrada[2])

entrada = [str(_) for _ in input().split()]
dia_final = str(entrada[0])
dia_f = int(entrada[1])

entrada = [int(_) for _ in input().split(" : ")]
hora_final = int(entrada[0])
minuto_final = int(entrada[1])
segundo_final = int(entrada[2])

dias = dia_f - dia_i
horas = hora_final - hora_inicial
minutos = minuto_final - minuto_inicial
segundos = segundo_final - segundo_inicial

if segundos < 0:
    segundos += 60
    minutos -= 1

if minutos < 0:
    minutos += 60
    horas -= 1

if horas < 0:
    horas += 24
    dias -= 1

print(f"{dias} dia(s)\n{horas} hora(s)\n{minutos} minuto(s)\n{segundos} segundo(s)")