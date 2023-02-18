nome = input()
salario = float(input())
vendas = float(input())

comissao = 0.15 * vendas
salario += comissao

print("TOTAL = R$ %0.2f" %salario)