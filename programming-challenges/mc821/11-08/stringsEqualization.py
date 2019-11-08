t = int(input())
for t_ in range(t):
    s = input()
    t = input()
    flag = False
    for c in s:
        if c in t:
            flag = True
            break
    if flag:
        print("YES")
    else:
        print("NO")
