n = int(input())

for i in range(n):
    s = input()
    c = int(input())
    new_s = ''

    for j in s:
        if chr(ord(j) - c) < 'A':
            new_s += chr(ord(j) - c + 26)
        else:
            new_s += chr(ord(j) - c)
            
    print(new_s)