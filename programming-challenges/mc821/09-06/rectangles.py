def rect(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    if n == 2:
        return 2
    return n + rect(n//2) -1


n = int(input())
print(rect(n))
