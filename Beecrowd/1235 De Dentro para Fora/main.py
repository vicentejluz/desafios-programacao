n = int(input())

while n > 0:
    str = input()

    met = len(str) // 2

    rev_m = str[:met]
    rev_f = str[met:]

    rev = rev_m[::-1] + rev_f[::-1]
    print(rev)

    n -= 1