import numpy as np

def choose(n,k):
    if k > n:
        return 0
    r = np.longdouble(1)
    for i in range(1,k+1):
        r *= np.longdouble(n)
        n = n - 1
        r /= np.longdouble(i)

    return r

def main():

    while True:

        x = list(map(float,input().split()))
        if len(x) == 1:
            break
        (n,m) = x

        noneEmpty = 0

        for i in range(int(m)):
            if i%2 == 0:
                noneEmpty += choose(m,i)*(np.longdouble(1-(i/m))**n)
            else:
                noneEmpty += -1*choose(m,i)*(np.longdouble(1-(i/m))**n)

        print("{0:.7f}".format(1 - noneEmpty))


main()
