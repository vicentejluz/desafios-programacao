def obter_indice_segundo_maior(vet, maior):
    segundo_maior = vet[0]
    cont = 0
    if vet[0] == maior:
        segundo_maior = vet[1]
        cont = 1
    for ind, v in enumerate(vet):
        if (v > segundo_maior and v != maior):
            segundo_maior = v
            cont = ind
    return cont + 1


while True:
    n = int(input())

    if n == 0:
        break

    vet = []

    vet = [int(_) for _ in input().split()[:n]]

    maior = max(vet)

    indice_segundo_maior = obter_indice_segundo_maior(vet, maior)

    print(indice_segundo_maior)
