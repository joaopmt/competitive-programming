import math

v, n = [int(x) for x in input().split()]

x = v*n
for i in range(1, 10):
    print(math.ceil((x*(i/10))), end=' ')
print()
