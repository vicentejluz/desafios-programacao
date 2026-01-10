arr = [int(_) for _ in input().split()]

maior = arr[0]
for i in range(len(arr)):
    if arr[i] == 0:
        break
    elif maior < arr[i]:
        maior = arr[i]

print(maior)