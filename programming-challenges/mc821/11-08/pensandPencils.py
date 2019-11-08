t = int(input())
for t_ in range(t):
    a, b, c, d, k = [int(x) for x in input().split()]
    x = a//c
    if a%c != 0:
        x += 1
    y = b//d
    if b%d != 0:
        y += 1
    if x+y <= k: print(x, y)
    else: print('-1')
