# TODO gets TlE

s = input()

for i in range(len(s),-1,-1):
    prefix = s[:i]
    sufix = s[-i:]
    if prefix == sufix:
        if prefix in s[1:-1]:
            print(prefix)
            break
    if i == 0:
        print("Just a legend")
