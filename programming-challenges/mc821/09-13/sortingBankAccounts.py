T = int(input())

for t in range(T):
    n = int(input())
    l = []
    for i in range(n):
        num = input()
        l.append(num)
    l.sort()
    i = 0
    len_ = len(l)
    while i < len_:
        k = 1
        while i < len_-1 and l[i] == l[i+1]:
            k += 1
            i += 1
        print(l[i], k)
        i += 1
    if t != T-1:
        print()
        input()
