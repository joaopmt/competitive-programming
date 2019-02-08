#include <stdio.h>

typedef struct{
    unsigned long long x;
    unsigned long long y;
} Point;

Point bin_search(unsigned long long e, unsigned long long d, unsigned long long k){
    int m = (e + d) / 2;

    if(k == 0){
        pt.x =
        pt.y =
        return pt;
    }
    return bin_search(e, m, k-1);
    return bin_search(m+1, d, k-2);

}

int main(void){
    int T;
    unsigned long long n, k, aux, aux2, tmp, j;

    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%llu %llu", &n, &k);
        j = 2;
        tmp = n;
        while(1){
            tmp \= j;
            aux2 = 0;
            for(aux = 0; aux < j; aux++){
                aux2 += tmp;
                k--;
                if(k == 0){
                    if(aux2 > (n - aux2))
                        printf"Case #%d: %llu %llu\n", i, aux2, (n - aux2));
                    else if(aux2 < (n - aux2))
                        printf"Case #%d: %llu %llu\n", i, (n - aux2), aux2);
                    else
                        printf"Case #%d: %llu %llu\n", i, aux2, aux2);
                    break;
                }
            }
            if(k == 0) break;
            j *= 2;
        }
    }
    return 0;
}
