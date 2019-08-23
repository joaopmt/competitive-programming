def fibo_to_n(n):
    a, b, c, d, e = 1, 2, 3, 5, 8
    while e != n:
        a = b
        b = c
        c = d
        d = e
        e = c + d
    return a, b, d

def main():
    T = int(input())
    for t in range(T):
        n = int(input())
        if n < 8:
            print("impossible")
        else:
            fibo_n4, fibo_n3, fibo_n1 = fibo_to_n(n)
            print(fibo_n4, fibo_n3, fibo_n1)

main()
