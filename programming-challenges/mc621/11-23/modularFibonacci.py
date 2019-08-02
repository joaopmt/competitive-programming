import sys

cache = {0: 0, 1: 1}

def fib(n):
    if n in cache:
        return cache[n]
    a, b = 0, 1
    for i in range(n):
        cache[i] = a
        a, b = b, a+b
    return a

def Main():
    while True:
        try:
            n, m = map(int, input().split())
            print(fib(n)%pow(2,m))
        except:
            break

if __name__ == '__main__':
	Main()
