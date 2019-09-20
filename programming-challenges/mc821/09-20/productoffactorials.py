def mulmod(a, b, mod):
    res = 0
    a = a % mod
    while (b > 0):
        if (b % 2 == 1):
            res = (res + a) % mod
        a = (a * 2) % mod
        b //= 2
    return res % mod

n = int(input())
ans = 1
fact = 1
flag = False
for i in range(1, n+1):
    fact = mulmod(fact, i, 109546051211)
    ans = mulmod(ans, fact, 109546051211)
    if not ans:
        print(0)
        flag = True
        break
if not flag:
    print(int(ans))
