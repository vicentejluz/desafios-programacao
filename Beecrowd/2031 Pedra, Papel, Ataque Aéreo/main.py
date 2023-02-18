n = int(input())

for _ in range(n):
    jog1 = input()
    jog2 = input()
    
    if (jog1 == "ataque") and (jog2 == "pedra") or (jog1 == "pedra") and (jog2 == "papel") or (jog1 == "ataque") and (jog2 == "papel"):
        print("Jogador 1 venceu")
    elif (jog2 == "ataque") and (jog1 == "pedra") or (jog2 == "pedra") and (jog1 == "papel") or (jog1 == "papel") and (jog2 == "ataque"):
        print("Jogador 2 venceu")
    elif (jog1 == "papel") and (jog2 == "papel"):
        print("Ambos venceram")
    elif (jog1 == "pedra") and (jog2 == "pedra"):
        print("Sem ganhador")
    else:
        print("Aniquilacao mutua")