def main():
    T = int(input())
    for t in range(1, T+1):
        n = int(input())
        start, end, indexes = [], [], []
        for i in range(n):
            startt, endt = [int(x) for x in input().split()]
            indexes.append(i)
            start.append(startt)
            end.append(endt)
        original_list = list(zip(start, end, indexes))
        sorted_times = sorted(original_list)
        last_c = 0
        last_j = 0
        impossible = False
        d = {}
        for start, end, i in sorted_times:
            if last_c <= start:
                d[(start, end, i)] = 'C'
                last_c = end
            elif last_j <= start:
                d[(start, end, i)] = 'J'
                last_j = end
            else:
                impossible = True
                break
        if impossible:
            print("Case #{}: {}".format(t, "IMPOSSIBLE")) 
        else:
            print("Case #{}: ".format(t), end='')
            for start_end_i in original_list:
                print(d[start_end_i], end='')
            print()

main()