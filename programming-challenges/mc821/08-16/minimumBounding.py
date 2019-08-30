def point_fit(x, y):
    return x, y, x, y


def circle_fit(x, y, r):
    return x - r, y - r, x + r, y + r


def line_fit(x1, y1, x2, y2):
    return min(x1, x2), min(y1, y2), max(x1, x2), max(y1, y2)


def main():
    T = int(input())
    for t in range(T):
        n = int(input())
        ll_coord_min_x, ll_coord_min_y = 1001, 1001
        ur_coord_max_x, ur_coord_max_y = -1001, -1001
        for i in range(n):
            line = input().split()
            if line[0] == 'p':
                ll_coord_x, ll_coord_y, ur_coord_x, ur_coord_y = point_fit(int(line[1]), int(line[2]))
            elif line[0] == 'c':
                ll_coord_x, ll_coord_y, ur_coord_x, ur_coord_y = circle_fit(int(line[1]), int(line[2]),
                                                int(line[3]))
            elif line[0] == 'l':
                ll_coord_x, ll_coord_y, ur_coord_x, ur_coord_y = line_fit(int(line[1]), int(line[2]),
                                              int(line[3]), int(line[4]))
            ll_coord_min_x = min(ll_coord_min_x, ll_coord_x)
            ll_coord_min_y = min(ll_coord_min_y, ll_coord_y)
            ur_coord_max_x = max(ur_coord_max_x, ur_coord_x)
            ur_coord_max_y = max(ur_coord_max_y, ur_coord_y)
        print(ll_coord_min_x, ll_coord_min_y,
              ur_coord_max_x, ur_coord_max_y)
        if t != T-1:
            input()

main()
