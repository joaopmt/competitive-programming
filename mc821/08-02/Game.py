import sys

def Main():
    n1, n2, k1, k2 = [int(x) for x in input().split()]

    if n1 > n2:
        print("First")
    else:
        print("Second")

        
if __name__ == '__main__':
	Main()
