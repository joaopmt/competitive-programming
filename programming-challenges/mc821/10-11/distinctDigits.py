def unique_digits(x):
    d = {}
    while x > 0:
        if x%10 in d:
            return False
        d[x%10] = 1
        x //= 10
    return True

l, r = map(int, input().split())
x = l
while x <= r:
    if unique_digits(x):
        print(x)
        break
    x += 1
if x > r:
    print("-1")
