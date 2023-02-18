def entradaValidacao():
    val = -1
    while val < 0 or val > 10:
        val = float(input())
        if val < 0 or val > 10:
            print("nota invalida")
    return val


while True:

    x = entradaValidacao()
    y = entradaValidacao()

    media = (x + y) / 2
    print("media = %.2f" % media)

    opc = 0
    while opc != 1 and opc != 2:
        print("novo calculo (1-sim 2-nao)")
        opc = int(input())

    if opc == 2:
        break
