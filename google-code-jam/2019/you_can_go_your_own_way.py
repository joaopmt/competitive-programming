t = int(input())
for i in range(1, t+1):
    n = int(input())
    print("Case #{}: ".format(i), end='')
    her_dir_string = input()
    my_last_dir = ''
    my_pos = [0,0]
    her_pos = [0,0]
    for her_dir in her_dir_string:
        if my_pos == her_pos:
            if her_dir == 'S':
                print('E',end='')
                my_pos[1] += 1
                her_pos[0] += 1
                my_last_dir = 'E'
            else:
                print('S',end='')
                my_pos[0] += 1
                her_pos[1] += 1
                my_last_dir = 'S'
        else:
            if my_last_dir == 'S':
                print('E',end='')
                my_pos[1] += 1
            else:
                print('S',end='')
                my_pos[0] += 1
            if her_dir == 'S':
                her_pos[0] += 1
            else:
                her_pos[1] += 1
    print()
