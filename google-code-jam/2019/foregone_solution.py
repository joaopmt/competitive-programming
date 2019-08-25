t = int(input())
for i in range(1, t+1):
    n = int(input())
    n_ = n
    dec_pos = 0
    B = 0
    while(n_ > 0):
        if n_ % 10 == 4:
            B += 10**dec_pos
        n_ //= 10
        dec_pos += 1
    print("Case #{0}: {1} {2}".format(i, n-B, B))
