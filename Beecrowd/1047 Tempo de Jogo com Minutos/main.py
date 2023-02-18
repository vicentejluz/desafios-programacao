entrada = [int(i) for i in input().split()]

hora_inicial = entrada[0]
minuto_inicial = entrada[1]
hora_final = entrada[2]
minuto_final = entrada[3]

hora_total = hora_final - hora_inicial

if hora_total < 0:
    hora_total += 24

minuto_total = minuto_final - minuto_inicial

if minuto_total < 0:
    minuto_total += 60
    if hora_total != 0:
        hora_total -= 1
    else:
        hora_total = 23

if minuto_total == 0 and hora_total == 0:
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
else:
    print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora_total, minuto_total))