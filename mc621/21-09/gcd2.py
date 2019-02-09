import sys

def Main():
    n = int(input())
    while n > 0:
        a, b = map(int, input().split())
        while True:
            if a == 0:
                print(b)
                break
            if b == 0:
                print(a)
                break
            aux = a
            a = b
            b = aux % b
        n -= 1


if __name__ == '__main__':
	Main()
