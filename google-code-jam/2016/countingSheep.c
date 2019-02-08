// https://code.google.com/codejam/contest/6254486/dashboard
#include <stdio.h>

int main(void){
    int T, i, j, k, flag, aux, n;
    int vetor[10];

    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%d", &n);
        if(n == 0){
            printf("Case #%d: INSOMNIA\n", i);
            continue;
        }
        // reseta/inicializa o vetor
        for(k = 0; k < 10; k++){
            vetor[k] = 0;
        }
        flag = 0;
        // Enquanto nao aparecer todos os algarismos
        for(j = 1; !flag; j++){
            // Isola cada algarismo de n*j e da ok p/ ele
            aux = n * j;
            while(aux > 0){
                vetor[aux%10] = 1;
                aux /= 10;
            }
            // Verifica se ja apareceram todos os algarismos
            for(k = 0; k < 10; k++){
                if(!vetor[k]) break;
                if(k == 9) flag = 1;
            }
        }
        printf("Case #%d: %d\n", i, n*(j-1));
    }


    return 0;
}
