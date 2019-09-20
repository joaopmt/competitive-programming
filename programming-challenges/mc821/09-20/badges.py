b = int(input())
g = int(input())
n = int(input())

# vasya doesnt know how many b, g in n
# -> account for all possible cases

ans = 0
for i in range(b+1):
    for j in range(g+1):
        if i + j == n:
            ans += 1

print(ans)
