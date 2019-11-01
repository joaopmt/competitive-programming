temp = input().split()
s = int(temp[0])
n = int(temp[1])

inimigos = {}
for t in range (0,n):
    temp = input().split()
    forca = int(temp[0])
    bonus = int(temp[1])
    if (forca in inimigos):
        inimigos[forca] = inimigos[forca] + bonus
    else:
        inimigos[forca] = bonus

perdeu = 0
for i in sorted (inimigos):
    if (i < s):
        s = s + inimigos[i]
    else:
        perdeu = 1
        break;


if perdeu == 0:
    print("YES")
else:
    print("NO")
