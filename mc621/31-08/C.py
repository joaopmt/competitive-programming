
def Main():
    while True:
        s_ = input()
        s = list(s_)
        if s[0] == '-':
            break
        if len(s) > 1 and s[1] == 'x':
            s = s[2:]
            s_ = ''.join(s)
            a = int(s_.lower(), 16)
            print(a)
        else:
            a = int(s_)
            s_ = hex(a)
            s_ = s_.upper()
            l = list(s_)
            l[1] = 'x'
            s_ = ''.join(l)
            print(s_)

if __name__ == '__main__':
	Main()
