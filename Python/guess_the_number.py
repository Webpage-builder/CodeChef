t = int(input())
while t:
    for i in range(1, 1001):
        m = pow(i, 2)
        print(m)
        k = int(input())
        if(k == 1):
            break
        elif(k == -1):
            break
        else:
            continue
    t -= 1