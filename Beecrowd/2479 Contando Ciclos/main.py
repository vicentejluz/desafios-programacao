i = 1

while True:
    n = int(input())
    if n == -1:
        break
    cycle = n // 2
    print(f"Experiment {i}: {cycle} full cycle(s)")
    i += 1