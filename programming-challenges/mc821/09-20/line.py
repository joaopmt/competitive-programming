# TODO WA

a, b, c = [int(x) for x in input().split()]

if a == 0 or b == 0:
    print("-1")
else:
    print(((-c)-(b*(-c)))//a, -c)
