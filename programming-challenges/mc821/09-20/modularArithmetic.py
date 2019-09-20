def egcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = egcd(b % a, a)
        return (g, x - (b // a) * y, y)

def modinv(a, m):
    g, x, y = egcd(a, m)
    if g != 1:
        return -111111
    else:
        return x % m

while True:
    n, t = [int(x) for x in input().split()]
    if n == 0 and t == 0:
        break
    for i in range(t):
        a, op, b = input().split()
        a = int(a)
        b = int(b)
        if op == '+':
            print((a+b)%n)
        if op == '-':
            print((a-b)%n)
        if op == '*':
            print((a*b)%n)
        if op == '/':
            if b == 0:
                print("-1")
            else:
                inv_b = modinv(b, n)
                if inv_b == -111111:
                    print("-1")
                else:
                    print((a*inv_b)%n)
