#include <stdio.h>
#include <stdlib.h>

long int entryt[2000], exitt[2000];

int main(){

    int N, M;
    while(scanf("%d %d", &N, &M) == 2) {
        long int i, j;
        for(i = 0; i < N; i++) scanf("%ld", &entryt[i]);
        for(i = 0; i < M; i++) scanf("%ld", &exitt[i]);
        map<int, int> R;
        int best = 0;
        long int best_i;
        for(i = N-1; i >= 0; i--){
            for(j = M-1; j >= 0; j--){
                if(entryt[i] > exitt[j])
                    break;
                long int x = exitt[j]-entryt[i];
                R[x]++;
                if(R[x] > best || (R[x] == best && x < best_i)){
                    best = R[x];
                    best_i = x;
                }
            }
        }
        printf("%ld\n", best_i);
    }

    return 0;
}
