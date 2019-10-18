q = int(input())

for i in range(q):
    c, m, x = [int(x) for x in input().split()]
    n_teams = (c+m+x)//3
    print(min(n_teams, min(c,m)))
