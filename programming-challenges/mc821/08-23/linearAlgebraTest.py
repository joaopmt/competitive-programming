def Main():
    t = int(input())
    for i in range(t):
        n = int(input())
        dic_a = {}
        dic_b = {}
        for j in range(n):
            a, b = [int(x) for x in input().split()]
            try:
                dic_a[a] += 1
            except:
                dic_a[a] = 1
            try:
                dic_b[b] += 1
            except:
                dic_b[b] = 1
        ans = 0
        for key in dic_a:
            if key in dic_b:
                ans += dic_a[key]*dic_b[key]
        print(ans)


Main()
