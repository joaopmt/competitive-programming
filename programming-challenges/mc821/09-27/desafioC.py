n, m = list(map(int, input().split(" ")))
s = str(input())
t = str(input())
if s == "*":
    print("YES")
elif "*" in s and ((len(s) < len(t))):
    s1, s2 = s.split("*")
    if t[0:len(s1)] == s1 and t[((len(t))-(len(s2))):] == s2:
        print("YES")
    else:
        print("NO")
else:
    s = s.replace("*", "")
    if s == t:
        print("YES")
    else:
        print("NO")
