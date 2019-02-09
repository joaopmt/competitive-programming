import sys

def Main():
    while True:
        try:
            a, b = map(int, input().split())
            print(abs(b-a))
        except:
            break

if __name__ == '__main__':
	Main()
