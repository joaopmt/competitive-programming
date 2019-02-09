import sys

def Main():
    while True:
        try:
            z = int(input())
            w = int(input())

            y = (z-w)//2;
            x = z-y;
            print(x)
            print(y)

        except:
            break


if __name__ == '__main__':
	Main()
