t = input()
for i in range(t):
    t = 0
    n, k, m = raw_input().split(" ")
    n = int(n)
    k = int(k)
    m = int(m)

    if (m < n):
        print 0
        continue
    
    while(1):
        t += 1
        n *= k
        if (n>m):
            break
    print t-1
