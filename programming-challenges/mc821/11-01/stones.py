t = int(input())

for t_ in range(t):
    a, b, c = [int(x) for x in input().split()]
    count = 0
    while b >= 1 and c >= 2:
        b -= 1
        c -= 2
        count += 3
    while a >= 1 and b >= 2:
        a -= 1
        b -= 2
        count += 3
    print(count)
