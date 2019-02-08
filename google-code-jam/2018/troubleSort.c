#include <stdio.h>

void swap(int *vet, int i, int j){
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

int main(void){
    int T, i;

    scanf("%d", &T);
    int k = 0;
    while(k++ < T){
        int n, l[100000];
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &l[i]);
        int done = 0;
        while(!done){
            done = 1;
            for(i = 0; i < n-2; i++){
                if(l[i] > l[i+2]){
                    done = 0;
                    swap(l, i, i+2);
                }
            }
        }
        int ok = 1;
        for(i = 0; i < n-1; i++){
            if(l[i] > l[i+1]){
                ok = 0;
                break;
            }
        }
        if(!ok)
            printf("Case #%d: %d\n", k, i);
        else printf("Case #%d: OK\n", k);
    }

    return 0;
}
