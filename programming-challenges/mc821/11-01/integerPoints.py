t = int(input())

for t_ in range(t):
    x_pos_even = 0
    x_pos_odd = 0
    x_neg_even = 0
    x_neg_odd = 0
    same = 0
    seen = {}
    n = int(input())
    ps = [int(x) for x in input().split()]
    for p in ps:
        if p in seen:
            same += seen[p]
            seen[p] += 1
        else:
            seen[p] = 1
        if p%2==0:
            x_pos_even += 1
        else:
            x_pos_odd += 1
    seen = {}
    m = int(input())
    ps = [int(x) for x in input().split()]
    for p in ps:
        if p in seen:
            same += seen[p]
            seen[p] += 1
        else:
            seen[p] = 1
        if p%2==0:
            x_neg_even += 1
        else:
            x_neg_odd += 1
    print(x_pos_even*x_neg_even + x_pos_odd*x_neg_odd + same)
