def lcs(s, si, t, ti):
    if si == 0 or ti == 0:
        return 0
    if s[si-1] == t[ti-1]:
        return 1 + lcs(s, si-1, t, ti-1)
    else:
        return max(lcs(s, si-1, t, ti), lcs(s, si, t, ti-1))

a = input()
b = input()

print(lcs(a, len(a), b, len(b)))
