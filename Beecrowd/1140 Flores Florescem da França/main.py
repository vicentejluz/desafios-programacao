while(True):
    frase = input()

    if frase == '*':
        break

    cont = 0
    log = True

    for c in frase:
        if c == ' ':
            if frase[0] != frase[cont + 1].upper() and frase[0] != frase[cont + 1].lower():
                log = False
                break
        cont += 1
    
    if log:
        print("Y")
    else:
        print("N")