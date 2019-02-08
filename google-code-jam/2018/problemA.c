#include <stdio.h>
#include <string.h>


int main(void){
    int i, m, n, T, res, k, count, flippou, terminou, hard;
    char s[1001];

    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%s", s);
        scanf("%d", &k);
        res = 0;
        hard = 0;
        while(1){
            flippou = 0;
            for(m = 0; m <= strlen(s) - k; m++){
                count = 0;
                for(n = m; (n - m) < k + hard; n++){
                    if(n >= strlen(s)) break;
                    if(s[n] == '-') count++;
                }
                if(count >= k/2){
                    for(n = m; (n - m) < k; n++){
                        if(s[n] == '-') s[n] = '+';
                        else s[n] = '-';
                    }
                    flippou = 1;
                    res++;
                    printf("FLIPPOU: %s\n", s);
                }
            }
            terminou = 1;
            for(m = 0; m < strlen(s); m++){
                if(s[m] == '-') terminou = 0;
            }
            if(terminou) break;
            if(flippou && hard) hard = 0;
            if(!flippou){
                if(hard) break;
                hard = 1;
            }
        }
        if(terminou){
            printf("Case #%d: %d\n", i, res);
            continue;
        }
        if(!flippou){
            printf("Case #%d: IMPOSSIBLE\n", i);
            continue;
        }
    }

    return 0;
}
