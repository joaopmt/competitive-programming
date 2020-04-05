T = int(input())
for t in range(1, T+1):
    s = input()
    ans_list = []
    ans_list.append(int(s[0])*'(')
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            ans_list.append(s[i])
        elif s[i] < s[i+1]:
            ans_list.append(s[i] + (int(s[i+1]) - int(s[i])) * '(')
        else:
            ans_list.append(s[i] + (int(s[i]) - int(s[i+1])) * ')')
    ans_list.append(s[-1] + int(s[-1])*')')
    print("Case #{}: {}".format(t, ''.join(ans_list)))



# 0202110
# 0((2))0((2))(11)0

#  312
# (201)