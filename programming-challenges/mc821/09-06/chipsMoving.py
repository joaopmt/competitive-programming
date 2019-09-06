
n = int(input())

l = [int(x) for x in input().split()]
count1 = 0
count2 = 0
for e in l:
    if e % 2 == 0:
        count1 += 1
    else:
        count2 += 1
print(min(count1, count2))
