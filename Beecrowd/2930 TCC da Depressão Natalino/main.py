e, d = [int(_) for _ in input().split()]

if e < (d - 2):
    print("Muito bem! Apresenta antes do Natal!")
elif e <= d:
    print("Parece o trabalho do meu filho!")
    if (d + 1) < 24:
        print("TCC Apresentado!")
    else:
        print("Fail! Entao eh nataaaaal!")
else:
    print("Eu odeio a professora!")