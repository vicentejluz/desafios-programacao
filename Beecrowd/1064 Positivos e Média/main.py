pos, media = 0, 0

for _ in range(6):
    valores = float(input())

    if valores > 0:
        pos += 1
        media += valores

media /= pos
    
print(f"{pos} valores positivos")
print("%.1f" %media)