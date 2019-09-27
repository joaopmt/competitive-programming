temp = input().split()
n = int(temp[0])
k = int(temp[1])
mafia = [int(x) for x in input().split()]

cont = 1
dic = {}
presos = []
for m in mafia:
    if (m in dic):
        dic[cont] = [m] + dic[m]
    else:
        if(cont == 1):
            dic[cont] = []
        else:
            dic[cont] = [m]
    cont = cont + 1
for k1 in range(0,k):
    maior = 0
    maiori = -1
    for i in dic:
        dic[i] = [i] + dic[i]
        # print(i, dic[i])
        temp = len(dic[i])
        if (temp > maior):
            maior = temp
            maiori = i
    if (len(presos) == 0):
        presos = dic[maiori]
    else:
        for o in dic[maiori]:
            if (o not in presos):
                presos.append(o)
    remove = []
    for i in dic:
        if i in dic[maiori]:
            remove.append(i)
    for i in remove:
        del dic[i]

print(len(presos))
