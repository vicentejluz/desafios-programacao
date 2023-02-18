pos = 0

for _ in range(6):
    valores = float(input())

    if valores > 0:
        pos += 1
    
print(f"{pos} valores positivos")