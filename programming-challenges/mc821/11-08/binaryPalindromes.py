t = int(input())

def isodd(n):
    return n%2 == 1

for t_ in range(t):
    n = int(input())
    odd = even0 = odd0 = 0
    for i in range(n):
        s = input()
        if isodd(len(s)): odd += 1
        if not isodd(s.count('0')):
            even0 += 1
        else:
            odd0 += 1
    if odd == 0 and isodd(odd0):
        print(n-1)
    else: print(n)
