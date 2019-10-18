
n = int(input())
bs = list(map(int, input().split()))
m = int(input())
gs = list(map(int, input().split()))

ans = 0
bs.sort()
gs.sort()
i = j = 0
while i < len(bs) and j < len(gs):
    if abs(bs[i]-gs[j]) <= 1:
        ans += 1
        i += 1
        j += 1
    elif gs[j] > bs[i]:
        i += 1
    else:
        j += 1
print(ans)
