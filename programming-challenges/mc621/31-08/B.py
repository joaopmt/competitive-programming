import math

def comb(n,k):
    return math.factorial(n)/(math.factorial(k)*math.factorial(n-k))

def tree(num,ans):
    if(ans[num] != -1):
        return ans[num]
    if(num == 0):
        return 0
    if(num == 1):
        return 1
    ans[num] = 0
    for i in range(num):
        ans[num] += num*(tree(i,ans)+tree(num-1-i,ans))*comb(num-1,i)
    return ans[num]


def main():
    while(True):
        num = int(input())
        if(num == 0):
            break
        ans = [-1]*(num+1)
        print(tree(num,ans))


if __name__=="__main__":
    main()
