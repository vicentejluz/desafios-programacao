n = int(input())
res = []
res1 = 0
res2 = 0
res3 = 0
res4 = 0
res5 = 0
res6 = 0

for _ in range(n):
    str = input()
    s, b, a = [int(_) for _ in input().split()]
    s1, b1, a1 = [int(_) for _ in input().split()]

    res1 += s
    res2 += b
    res3 += a
    res4 += s1
    res5 += b1
    res6 += a1

res.insert(0, res4 / res1 * 100)
res.insert(1, res5 / res2 * 100)
res.insert(2, res6 / res3 * 100)

print("Pontos de Saque: %.2f %%."  %res[0])
print("Pontos de Bloqueio: %.2f %%." %res[1])
print("Pontos de Ataque: %.2f %%." %res[2])