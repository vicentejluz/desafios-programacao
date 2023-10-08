n = int(input())

entrada = [str(_) for _ in input().split()]
p = int(entrada[0])
c = entrada[1]
q = int(entrada[2])

res = p + q if c == '+' else p * q

if res > n:
    print("OVERFLOW")
else:
    print("OK")