def solve(n, b, sol):
        if(sol[n][b] != -1):
            return sol[n][b]
        if(n == 0):
            return 0
        if(b == 0):
            return 0
        if(b == 1):
            return 1
        sol[n][b] = 0
        for i in range(1,n+1):
            if i*b > n:
                break
            sol[n][b] += solve(n-i*b,b-1,sol)
        return sol[n][b]

def main():
        n = int(input())
        sol = [[-1]*n]*n
        ans = 0
        for i in range(1,n):
            for j in range(1,n+1):
                if(j*i > n):
                    break
                if(n - j*i >= 1):
                        ans += solve(n - j*i,i-1,sol);
        print(ans)

if __name__=="__main__":
    main()
