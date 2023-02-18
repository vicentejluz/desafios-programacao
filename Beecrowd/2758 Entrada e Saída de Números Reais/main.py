import struct # usar biblioteca struct

a, b = [float(_) for _ in input().split()]
c, d = [float(_) for _ in input().split()]

x = struct.unpack('f', struct.pack('f', a))[0] # trunca um float de 64bits para 32bits
y = struct.unpack('f', struct.pack('f', b))[0] # trunca um float de 64bits para 32bits

print("A = %f, B = %f" %(x, y))
print("C = %f, D = %f" %(c, d))
print("A = {:.1f}, B = {:.1f}" .format(x, y)) # outro formato de uso de ponto flutuantes
print("C = {:.1f}, D = {:.1f}" .format(c, d)) # outro formato de uso de ponto flutuantes
print("A = %.2f, B = %.2f" %(x, y))
print("C = %.2f, D = %.2f" %(c, d))
print("A = %.3f, B = %.3f" %(x, y))
print("C = %.3f, D = %.3f" %(c, d))
print("A = %.3E, B = %.3E" %(x, y))
print("C = %.3E, D = %.3E" %(c, d))
print("A = %.0f, B = %.0f" %(x, y))
print("C = %.0f, D = %.0f" %(c, d))