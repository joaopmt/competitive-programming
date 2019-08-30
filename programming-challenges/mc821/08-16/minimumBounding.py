def point_fit(x, y):
    return (x, y), (x, y)


def circle_fit(x, y, r):
    return (x - r, y - r), (x + r, y + r)


def line_fit(x1, y1, x2, y2):
    return (min(x1, x2), min(y1, y2)), (max(x1, x2), max(y1, y2))


def main():
    T = int(input())
    for t in range(T):
        n = int(input())
        ll_coord_min = 1001, 1001
        ur_coord_max = -1001, -1001
        for i in range(n):
            line = input().split()
            if line[0] == 'p':
                ll_coord, ur_coord = point_fit(int(line[1]), int(line[2]))
            elif line[0] == 'c':
                ll_coord, ur_coord = circle_fit(int(line[1]), int(line[2]),
                                                int(line[3]))
            elif line[0] == 'l':
                ll_coord, ur_coord = line_fit(int(line[1]), int(line[2]),
                                              int(line[3]), int(line[4]))
            ll_coord_min = min(ll_coord_min, ll_coord)
            ur_coord_max = max(ur_coord_max, ur_coord)
        print(ll_coord_min[0], ll_coord_min[1],
              ur_coord_max[0], ur_coord_max[1])
        if t != T-1:
            input()
            
main()
