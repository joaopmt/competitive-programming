// https://icpcarchive.ecs.baylor.edu/external/67/6758.pdf
#include <stdio.h>

int main(void){
    int t, n, x, y, i, vetor[100];

    scanf("%d", &t);
    while(t > 0){
        scanf("%d %d %d", &n, &x, &y);
        for(i = 0; i < n; i++)
            scanf("%d", &vetor[i]);
        if(vetor[0] == x && vetor[n-1] == y)
            printf("BOTH\n");
        if(vetor[0] == x && vetor[n-1] != y)
            printf("EASY\n");
        if(vetor[0] != x && vetor[n-1] == y)
            printf("HARD\n");
        if(vetor[0] != x && vetor[n-1] != y)
            printf("OKAY\n");
        t--;
    }
    return 0;
}
