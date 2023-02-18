n = int(input())
for i in range(n):
    entrada = [str(a) for a in input().split()]
    s = entrada[0]
    t = entrada[1]

    new_string = ""
    
    tamS = len(s)
    tamT = len(t)

    # tam = tamS if tamS >= tamT else tamT

    if tamS >= tamT:
        tam = tamS
    else:
        tam = tamT

    for j in range(tam):
        if j < tamS:
            new_string += s[j]
        if j < tamT:
            new_string += t[j]
    
    print(new_string)