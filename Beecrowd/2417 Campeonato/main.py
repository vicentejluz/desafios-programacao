temp = [int(_) for _ in input().split()]

c = temp[:3]
f = temp[3:]

pTotalC = (c[0] * 3) + c[1]
pTotalF = (f[0] * 3) + f[1]

if pTotalC > pTotalF:
    camp = 'C'
elif pTotalF > pTotalC:
    camp = 'F'
elif c[2] > f[2]:
    camp = 'C'
elif f[2] > c[2]:
    camp = 'F'
else:
    camp = '='

print(camp)
