def isodd(n):
    return n%2 == 1

t = int(input())
for t_ in range(t):
    s = input()
    ans = []
    count = 1
    for i in range(len(s)):
        if i == len(s)-1:
            if isodd(count):
                ans.append(s[i])
            break
        if s[i] == s[i+1]:
            count += 1
        else:
            if isodd(count):
                ans.append(s[i])
            count = 1
    for c in sorted(set(ans)):
        print(c, end='')
    print()
