n, a, b, c = [int(x) for x in input().split()]

min_ = min(a, min(b,c))
min_ = n//min_
ans = 0
for i in range(min_, -1, -1):
    for j in range(0, min_+1):
        k = abs((n - (a*i+b*j)) // c);
        if (a*i+b*j+c*k) == n:
           ans = max(ans, i+j+k);
print(ans)
