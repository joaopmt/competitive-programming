while True:
    try:
        n, b, H, w = [int(x) for x in input().split()]
        min_cost = float("inf")
        for h in range(H):
            p = int(input())
            beds = [int(x) for x in input().split()]
            flag = False
            for bed in beds:
                if bed >= n:
                    flag = True
            if flag:
                min_cost = min(min_cost, p*n)
        if min_cost <= b:
            print(min_cost)
        else:
            print("stay home")
    except:
        break
