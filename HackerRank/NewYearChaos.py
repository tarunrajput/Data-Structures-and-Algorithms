T = int(input().strip())

for a in range(T):
    n = int(input())
    q = list(map(int,input().rstrip().split()))

    b = {}
    r = 0
    cont = True
    
    while cont:
        cont = False
        for i in range(n-1):
            if q[i] > q[i+1]:
                if not q[i] in b:
                    b[q[i]] = 0
                b[q[i]] += 1
                if b[q[i]] > 2:
                    cont = False
                    r = "Too chaotic"
                    break
                q[i], q[i+1] = q[i+1], q[i]
                r += 1
                cont = True
    print(r)