Sal = float(input())
	
if Sal >= 0 and Sal <= 400:
    imposto = Sal * 0.15
    Sal = Sal + imposto
    print("Novo salario: %0.2f" %Sal)
    print("Reajuste ganho: %0.2f" %imposto)
    print("Em percentual: 15 %")

elif Sal <= 800:
    imposto = Sal * 0.12
    Sal = Sal + imposto
    print("Novo salario: %0.2f" %Sal)
    print("Reajuste ganho: %0.2f" %imposto)
    print("Em percentual: 12 %")

elif Sal <= 1200:
    imposto = Sal * 0.10
    Sal = Sal + imposto
    print("Novo salario: %0.2f" %Sal)
    print("Reajuste ganho: %0.2f" %imposto)
    print("Em percentual: 10 %")

elif Sal <= 2000:
    imposto = Sal * 0.07
    Sal = Sal + imposto
    print("Novo salario: %0.2f" %Sal)
    print("Reajuste ganho: %0.2f" %imposto)
    print("Em percentual: 7 %")

else:
    imposto = Sal * 0.04
    Sal = Sal + imposto
    print("Novo salario: %0.2f" %Sal)
    print("Reajuste ganho: %0.2f" %imposto)
    print("Em percentual: 4 %")