a1, b1, c1 = map(int, input().split())
a2, b2, c2 = map(int, input().split())

if a1 == 0 and b1 == 0 and a2 == 0 and b2 == 0 and c1 != c2:
    print(0)
elif (a1 == 0 and b1 == 0 and c1 == 0) or (a2 == 0 and b2 == 0 and c2 == 0):
    print("-1")
elif (a1 == 0 and b1 == 0 and c1 != 0) or (a2 == 0 and b2 == 0 and c2 != 0) and (c1 == c2):
    print(0)
elif a1*b2 == a2*b1:
    if b2*c1 == c2*b1 and c1*a2 == c2*a1:
        print("-1")
    else:
        print(0)
else:
    print(1)
