# TODO gets TLE

while True:
    line = input().split()
    if line[0] == "-1" and line[1] == '*':
        break
    k, s = int(line[0]), line[1]
    len_s = len(s)
    if len_s == 1:
        print(k)
    elif len_s > k:
        print(0)
    else:
        max_tail = 0
        flag = True
        for i in range(len_s-1):
            if s[i] != s[i+1]:
                flag = False
                break
        if flag:
            max_tail = len_s-1
        else:
            for i in range(len_s//2, 0, -1):
                if s[:i+1] == s[-(i+1):]:
                    max_tail = i+1
                    break
        if max_tail == len_s:
            max_tail = len_s-1
        head = len_s-max_tail
        ans = k//(head)
        if (k - ans*head) < max_tail:
            ans -= max_tail
        print(ans)
