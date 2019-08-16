def main():
    t = int(input())
    for j in range(t):
        n, m = [int(x) for x in input().split()]
        l1 = [int(x) for x in input().split()]
        l2 = [int(x) for x in input().split()]
        d = {}
        for i in range(n):
            if l1[i] not in d:
                d[l1[i]] = 1
            else:
                d[l1[i]] += 1
        d1 = {}
        for key, val in d.items():
            d1[key] = val
        for i in range(m):
            if l2[i] in d and l2[i] in d1:
                d[l2[i]] -= 1
            elif l2[i] in d and l2[i] not in d1:
                d[l2[i]] += 1
            elif l2[i] not in d and l2[i] not in d1:
                d[l2[i]] = 1

        sum = 0
        for val in d.values():
            sum += abs(val)
        print(sum)
main()
