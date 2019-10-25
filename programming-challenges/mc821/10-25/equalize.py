def bin_edit_dist(a, b, n):
    ans = 0
    i = 0
    while i < n-1:
        if a[i] == b[i]: i += 1
        elif a[i+1] == b[i+1]:
            ans += 1
            i += 2
        elif a[i] != a[i+1]:
            ans += 1
            i += 2
        else:
            ans += 1
            i += 1
    if i == n-1 and a[i] != b[i]: ans += 1
    return ans

def main():
    n = int(input())
    a = input()
    b = input()
    print(bin_edit_dist(a, b, n))

main()
