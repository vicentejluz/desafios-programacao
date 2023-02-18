import math

entrada = [int(i) for i in input().split()]
a = entrada[0]
b = entrada[1]
c = entrada[2]

MaiorAB = (a + b + abs(a - b)) / 2
MaiorAB = (MaiorAB + c + abs(MaiorAB - c)) / 2

print("{} eh o maior".format(int(MaiorAB)))