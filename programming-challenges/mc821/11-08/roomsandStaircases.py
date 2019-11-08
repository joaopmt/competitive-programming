t = int(input())

for t_ in range(t):
    n = int(input())
    s = input()
    from_start = n - s[::-1].find('1')
    from_end = n - s.find('1')
    max_rect = 0 if from_start > n or from_end > n else max(from_start, from_end)*2
    print(max(max_rect, n+s.count('1')))
