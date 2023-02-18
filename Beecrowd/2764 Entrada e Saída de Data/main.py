data = input()

data2 = data[3:6]
data2 += data[0:3]
data2 += data[6:8]

print(data2)

data2 = data[6:8]
data2 += data[2:6]
data2 += data[0:2]

print(data2)

print(data.replace('/', '-'))