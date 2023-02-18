#função que transforma o range() de int do for em um range() de float  
def frange(start, stop, skip = 1.0, decimals = 2):
  for i in range(int(start / skip), int(stop / skip)):
    yield round(i * skip, ndigits = decimals)

k = 0.2

for i in frange(0, 2.2, 0.2):
  for j in range(1, 4):
    if i == 0:
      print("I={:.0f} J=%d" .format(i) %j)
    elif i == 1:
      print("I={:.0f} J=%d" .format(i) %(j + k))
    elif i == 2:
      print("I={:.0f} J=%d" .format(i) %(j + k))
    else:
      print("I={:.1f} J={:.1f}" .format(i, j + k))
    if j == 3 and i > 0:
      k += 0.2