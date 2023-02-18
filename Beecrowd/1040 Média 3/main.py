entrada = [float(i) for i in input().split()]
N1 = entrada[0]
N2 = entrada[1]
N3 = entrada[2]
N4 = entrada[3]

media = (2 * N1 + 3 * N2 + 4 * N3 + 1 * N4) / (2 + 3 + 4 + 1)

if media < 5.0:
    print("Media: %0.1f" %media)
    print("Aluno reprovado.")
elif media <= 6.9:
    NotaExame = float(input())
    print("Media: %0.1f" %media)
    print("Aluno em exame.")
    MediaExame = (media + NotaExame) / 2
    print("Nota do exame: %0.1f" %NotaExame)
    if MediaExame < 5.0:
        print("Aluno reprovado.")
        print("Media final: %0.1f" %MediaExame)
    else:
        print("Aluno aprovado.")
        print("Media final: %0.1f" %MediaExame)
else:
    print("Media: %0.1f" %media)
    print("Aluno aprovado.")