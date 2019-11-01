def KMPSearch(pat, txt):
    M = len(pat)
    N = len(txt)
    count = 0

    lps = [0]*M
    j = 0

    computeLPSArray(pat, M, lps)

    i = 0
    while i < N:
        if pat[j] == txt[i]:
            i += 1
            j += 1

        if j == M:
            count += 1
            j = lps[j-1]

        elif i < N and pat[j] != txt[i]:
            if j != 0:
                j = lps[j-1]
            else:
                i += 1
    return count

def computeLPSArray(pat, M, lps):
    len = 0

    lps[0]
    i = 1

    while i < M:
        if pat[i]== pat[len]:
            len += 1
            lps[i] = len
            i += 1
        else:
            if len != 0:
                len = lps[len-1]

            else:
                lps[i] = 0
                i += 1


n, w  = [int(x) for x in input().split()]
l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))

l1_d = []
for i in range(1, n):
    l1_d.append(str(l1[i]-l1[i-1])+',')
l2_d = []
for i in range(1, w):
    l2_d.append(str(l2[i]-l2[i-1])+',')
l1_d = ''.join(l1_d)
l2_d = ''.join(l2_d)

if l2_d:
    count = KMPSearch(l2_d, l1_d)
    print(count)
else:
    print(len(l1))
