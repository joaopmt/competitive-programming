import sys

def Main():
    while True:
        x, y = map(int, input().split())
        if x == y == 0:
            break
        if x + y == 13:
            print("Never speak again.")
            continue
        if y > x:
            print("Left beehind.")
            continue
        if x > y:
            print("To the convention.")
            continue
        else:
            print("Undecided.")
            continue


if __name__ == '__main__':
	Main()
