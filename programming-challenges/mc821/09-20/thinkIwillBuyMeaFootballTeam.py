# TODO this version gets TLE

t = 1
while True:
    n = int(input())
    if n == 0:
        break
    l = []
    for i in range(n):
        l.append([int(x) for x in input().split()])
    cash = 0
    for l_ in l:
        cash += sum(l_)
    opt_cash = 0
    for i in range(len(l)):
        col_sum = 0
        for j in range(len(l)):
            col_sum += l[j][i]
        diff = col_sum - sum(l[i])
        opt_cash += max(diff, 0)
    print("{}. {} {}".format(t, cash, opt_cash))
    t += 1
