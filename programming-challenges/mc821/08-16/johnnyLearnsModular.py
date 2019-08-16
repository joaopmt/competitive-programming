
def main():
    t = int(input())
    for i in range(t):
        b, e, m = [int(x) for x in input().split()]
        print(str(i+1)+'.',pow(b, e, m))


main()
