# TODO gets WA

N, H, L = list(map(int, input().split(" ")))
lista = list(map(int, input().split(" ")))
pontuacoes = dict()
infinitos = dict()
for i in lista:
    pontuacoes[i] = 0

for _ in range(L):
    a, b = list(map(int, input().split(" ")))
    if a in lista and b not in lista:
        if b not in pontuacoes or pontuacoes[b] < (pontuacoes[a] + 1):
            pontuacoes[b] = pontuacoes[a] + 1
            if b in infinitos:
                del infinitos[b]
    elif b in lista and a not in lista:
        if a not in pontuacoes or pontuacoes[a] < (pontuacoes[b] + 1):
            pontuacoes[a] = pontuacoes[b] + 1
            if a in infinitos:
                del infinitos[a]
    elif a in pontuacoes and b not in pontuacoes:
        pontuacoes[b] = pontuacoes[a] + 1
        if b in infinitos:
            del infinitos[b]
    elif b in pontuacoes and a not in pontuacoes:
        pontuacoes[a] = pontuacoes[b] + 1
        if a in infinitos:
            del infinitos[a]
    elif a not in pontuacoes and b not in pontuacoes:
        if a in infinitos:
            infinitos[a] += b
        else:
            infinitos[a] = [b]

        if b in infinitos:
            infinitos[b] += a
        else:
            infinitos[b] = [a]

add_infinito = True

for i in infinitos:
    add_infinito = True
    for j in infinitos[i]:
        if j in pontuacoes:
            if i not in pontuacoes or pontuacoes[i] < pontuacoes[j] + 1:
                pontuacoes[i] = pontuacoes[j] + 1
                add_inifito = False
    if add_infinito:
        pontuacoes[i] = L + N + 999999


maior = lista[0]
for i in sorted(pontuacoes):
    if pontuacoes[i] == L + N + 999999:
        maior = i
        break
    if pontuacoes[i] > pontuacoes[maior]:
        maior = i

print(maior)
