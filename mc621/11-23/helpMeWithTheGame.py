import sys

col = {2:'a',4:'b',6:'c',10:'d',14:'e',18:'f',
    22:'g',26:'h',30:'i',34:'j',38:'k',42:'l',
    46:'m',50:'n',54:'o',58:'p',62:'q',66:'r',
    70:'s',74:'t',78:'u',82:'v',86:'w',90:'x',
    94:'y',98:'z'}

def Main():
    input()
    lines = sys.stdin.readlines()
    row = len(lines) / 2
    white = []
    black = []
    for line in lines:
        for i in range(2, len(line), 4):
            if 'A' <= line[i] <= 'Z':
                white.append((line[i], col[i], row))
            if 'a' <= line[i] <= 'z':
                black.append((line[i], col[i], row))
        row -= 1


    print("White: ", end='')
    for piece_info in white:
        if piece_info[0] == 'p':
            print("{0}{1},".format(piece_info[1],piece_info[2]), end='')
        else:
            print("{0}{1}{2},".format(piece_info[0],piece_info[1],piece_info[2]), end='')
    print("Black: ", end='')
    for piece_info in white:
        if piece_info[0] == 'p':
            print("{0}{1},".format(piece_info[1],piece_info[2]), end='')
        else:
            print("{0}{1}{2},".format(piece_info[0],piece_info[1],piece_info[2]), end='')

if __name__ == '__main__':
	Main()
