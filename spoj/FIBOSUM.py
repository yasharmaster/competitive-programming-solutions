def fib(n):
    if (n == 0):
        return 0
    elif (n==1):
        return 1
    else:
        return (1/5**0.5)(((1+5**0.5)/2)**n - ((1-5**0.5)/2)**n)

t = input()
for i in range(t):
    n, m = raw_input().split(" ")
    n = int(n)
    m = int(m)
    ans = 0
    for p in range(n,m+1):
        ans += fib(float(p))
    print ans
