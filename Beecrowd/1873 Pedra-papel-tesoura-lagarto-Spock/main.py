c = int(input())

for _ in range(c):
    jog1, jog2 = [_ for _ in input().split()]

    if (jog1 == "tesoura" and jog2 == "papel") or (jog1 == "tesoura" and jog2 == "lagarto") or \
       (jog1 == "papel" and jog2 == "pedra") or (jog1 == "papel" and jog2 == "spock") or \
       (jog1 == "pedra" and jog2 == "lagarto") or (jog1 == "pedra" and jog2 == "tesoura") or \
       (jog1 == "lagarto" and jog2 == "spock") or (jog1 == "lagarto" and jog2 == "papel") or \
       (jog1 == "spock" and jog2 == "tesoura") or (jog1 == "spock" and jog2 == "pedra"):
        print("rajesh")
    elif (jog2 == "tesoura" and jog1 == "papel") or (jog2 == "tesoura" and jog1 == "lagarto") or \
         (jog2 == "papel" and jog1 == "pedra") or (jog2 == "papel" and jog1 == "spock") or \
         (jog2 == "pedra" and jog1 == "lagarto") or (jog2 == "pedra" and jog1 == "tesoura") or \
         (jog2 == "lagarto" and jog1 == "spock") or (jog2 == "lagarto" and jog1 == "papel") or \
         (jog2 == "spock" and jog1 == "tesoura") or (jog2 == "spock" and jog1 == "pedra"):
        print("sheldon")
    else:
        print("empate")