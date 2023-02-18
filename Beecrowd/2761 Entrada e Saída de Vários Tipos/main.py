import struct

lista = input().split(" ", 3) # limita o split em 3
#lista = input().split(" ",maxsplit = 3) # limita o split

a = int(lista[0])
b = float(lista[1])
c = lista[2]
d = lista[3]

b = struct.unpack('f', struct.pack('f', b))[0]

print("{}{:.6f}{}{}".format(a, b, c, d))
print("{}\t{:.6f}\t{}\t{}".format(a, b, c, d))
print("%10d%10.6f%10c%10s" %(a, b, c, d))