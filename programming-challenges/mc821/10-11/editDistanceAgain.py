# aAAAaAAaaAAAa
# aAaAaAaAaAaAa
# AaAaAaAaAaAaA

while True:
    try:
        s = input()
        count1 = 0
        for i in range(len(s)):
            if i%2 == 0:
                if s[i].isupper():
                    count1 += 1
            else:
                if s[i].islower():
                    count1 += 1
        count2 = 0
        for i in range(len(s)):
            if i%2 == 0:
                if s[i].islower():
                    count2 += 1
            else:
                if s[i].isupper():
                    count2 += 1
        print(min(count1, count2))
    except:
        break
