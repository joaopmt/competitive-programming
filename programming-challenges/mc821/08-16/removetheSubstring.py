def is_subseq(s, t):
    i = 0
    for c in s:
        if i == len(t):
            break
        if c == t[i]:
            i += 1
    return i == len(t)


def main():
    s = input()
    t = input()
    ans = 0
    # creates substrings by removal of
    # all possible subtrings (substr = contiguous != subseq)
    for safe_i in range(len(s)):
        for rem_i in range(safe_i, len(s)):
            substr = s[:safe_i] + s[rem_i+1:]
            if is_subseq(substr, t):
                ans = max(ans, rem_i+1-safe_i)
    print(ans)

main()
