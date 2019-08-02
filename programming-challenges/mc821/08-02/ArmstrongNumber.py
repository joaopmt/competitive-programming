import sys

def Main():
    T = int(input())

    for i in range(T):
        n = input()
        N = len(n)
        n = int(n)
        tmp = n
        sum = 0
        while tmp > 0:
            sum += pow((tmp%10), N)
            tmp //= 10
        if sum == n:
            print("Armstrong")
        else:
            print("Not Armstrong")

if __name__ == '__main__':
	Main()
