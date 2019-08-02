import sys

def Main():
    while True:
        try:
            mylist = list()
            line = int(input())
            for i in range(line):
                nome = input()
                mylist.append(nome)
            cop = sorted(mylist.copy())
            if mylist == cop:
                print("INCREASING")
            else:
                cop = sorted(cop, reverse = True)
                if mylist == cop:
                    print("DECREASING")
                else :
                    print("NEITHER")
        except:
            break


if __name__ == '__main__':
	Main()
