// NOT WORKING


def fermat_test(n):

	if n == 2:
		return True
	if not n & 1:
		return False
	return pow(2, n-1, n) == 1

def Main():
    t = int(input())
    while t > 0:
        n = int(input())
        if fermat_test(n):
            print("YES")
        else:
            print("NO")
        t -= 1

if __name__ == '__main__':
	Main()
