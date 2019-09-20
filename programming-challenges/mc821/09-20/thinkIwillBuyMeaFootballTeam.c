#include <stdio.h>

int col_sum[1000] = {0};
int row_sum[1000] = {0};

int main(){
    int n, i, j, x;
    int t = 1;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        for(i = 0; i < n; i++){
            col_sum[i] = row_sum[i] = 0;
        }
        int cash = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                scanf("%d", &x);
                cash += x;
                row_sum[i] += x;
                col_sum[j] += x;
            }
        }
        int diff;
        int opt_cash = 0;
        for(i = 0; i < n; i++){
            diff = col_sum[i] - row_sum[i];
            if(diff > 0) opt_cash += diff;
        }
        printf("%d. %d %d\n", t, cash, opt_cash);
        t++;
    }
    return 0;
}
