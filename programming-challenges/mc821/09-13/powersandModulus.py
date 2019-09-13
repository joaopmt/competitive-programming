a, b = [int(x) for x in input().split()]
sum = 0
for i in range(1, a+1):
    sum += pow(i, b, a);
print(sum%a)
