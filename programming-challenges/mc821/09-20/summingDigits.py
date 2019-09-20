while True:
    n = int(input())
    if n == 0:
        break
    prev_sum = n
    sum_ = 0
    while True:
        while prev_sum > 0:
            sum_ += prev_sum % 10
            prev_sum //= 10
        if sum_ < 10:
            break
        prev_sum = sum_
        sum_ = 0
    print(sum_)
