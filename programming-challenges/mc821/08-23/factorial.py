import math


def Main():
    t = int(input())
    for i in range(t):
        n = int(input())
        s = str(math.factorial(n))
        count = 0
        for j in range(len(s)-1, -1, -1):
            if s[j] == '0':
                count += 1
            else:
                break
        print(count)

Main()
