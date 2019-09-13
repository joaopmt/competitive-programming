a, b = [int(x) for x in input().split()]

if a < b:
    print(0)
elif a == b:
    print("infinity")
else:
    x = a-b
    i = 1
    ans = 0
    while(i*i <= x):
        if not x%i:
            if x//i == i and i > b:
                ans += 1
            else:
                if i > b:
                    ans += 1
                if x//i > b:
                    ans += 1
        i += 1
    print(ans)
