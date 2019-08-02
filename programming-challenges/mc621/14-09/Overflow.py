import sys

INT_SIZE = 2147483647

def Main():
    while True:
        try:
            inp = input()
            if not inp or inp == '\n':
                continue
            x, op, y = inp.split()
            print(x,op,y)
            x = int(x)
            y = int(y)

            if abs(x) > INT_SIZE:
                print("first number too big")
            if abs(y) > INT_SIZE:
                print("second number too big")
            if op == '+':
                if x+y > INT_SIZE:
                    print("result too big")
            if op == '*':
                if x*y > INT_SIZE:
                    print("result too big")
        except:
            break

if __name__ == '__main__':
	Main()
