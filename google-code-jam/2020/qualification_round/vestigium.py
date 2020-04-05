def is_repeating_row(m, n, i):
    return len(set(m[i][:])) != n
    
    
def is_repeating_col(m, n, i):
    return len(set([row[i] for row in m])) != n
    

def main():
    T = int(input())
    for t in range(1, T+1):
        n = int(input())
        m = []
        repeated_rows, repeated_cols, trace = 0, 0, 0
        for i in range(n):
            m.append([int(x) for x in input().split()])
        for i in range(n):
            trace += m[i][i]
            if is_repeating_row(m, n, i):
                repeated_rows += 1
            if is_repeating_col(m, n, i):
                repeated_cols += 1
        print("Case #{}: {} {} {}".format(t, trace, repeated_rows, repeated_cols))


main()