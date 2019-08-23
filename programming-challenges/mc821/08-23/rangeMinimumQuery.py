def Main():
    n = int(input())
    l = [int(x) for x in input().split()]
    q = int(input())
    for i in range(q):
        i, j = [int(x) for x in input().split()]
        print(min(l[i:j+1]))

Main()
