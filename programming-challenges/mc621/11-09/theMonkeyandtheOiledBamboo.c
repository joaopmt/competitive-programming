#include<stdio.h>

int r[100000];

int main() {
    int t, n;

    scanf("%d", &t);
    int tc;
    for(tc = 1; tc <= t; tc++){
        scanf("%d", &n);
        int maxd;
        scanf("%d", &r[0]);
        maxd = r[0];
        int i;
        for(i = 1; i < n; i++){
            scanf("%d", &r[i]);
            if(r[i] - r[i-1] > maxd)
                maxd = r[i] - r[i-1];
        }
        int lostd = 0;
        int ans = maxd;
        if(maxd == r[0]){
            lostd++;
            maxd--;
        }
        for(i = 0; i < n-1; i++){
            int nextd = r[i+1] - r[i];
            int off = maxd - nextd;
            if(off < 0){
                ans++;
                maxd = ans;
                lostd = 0;
                if(maxd == nextd){
                    lostd++;
                    maxd--;
                }
            }
            else if(off == 0){
                lostd++;
                maxd--;
            }
        }
        printf("Case %d: %d\n", tc, ans);
    }
    return 0;
}
