T = int(input())
for t in range(T):
    a, b = map(int, input().split())
    if b < 5:
        print((a**b)%10)
    elif a == 0 or a == 10 or a == 20:
        print(0)
    elif a == 1 or a == 11:
        print(1)
    elif a == 5 or a == 15:
        print(5)
    elif a == 6 or a == 16:
        print(6)
    elif a == 2 or a == 3 or a == 7 or a == 12 or a == 13 or a == 17 or a == 8 or a == 18:
        if b % 4 == 0:
            print((a**4)%10)
        else:
            print((a**(b%4))%10)
    elif a == 4 or a == 14 or a == 9 or a == 19:
        if b % 2 == 0:
            print((a**2)%10)
        else:
            print((a**(b%2))%10)
