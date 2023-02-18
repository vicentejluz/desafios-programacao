n = int(input())

while n > 0:
    m = input()
    rev = ''
    for i in m:
        if i >= 'a' and i <= 'z' or i >= 'A' and i <= 'Z':
            rev += chr(ord(i) + 3)
        else:
            rev += i

    rev = rev[::-1]
    met = int(len(rev) / 2)
    rev_m = rev[:met]
    for i in rev[met::]:
        rev_m += chr(ord(i) - 1) 

    print(rev_m)

    n -= 1