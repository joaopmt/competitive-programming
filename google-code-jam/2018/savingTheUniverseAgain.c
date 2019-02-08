#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// shoot no final são os mais OPs (depois de todos os Cs) -> começar do final e ir passando os shoots pra tras
// trocar sempre CS

void swap(char *str, int i, int j);
void fixCount(int *cCount, char *str);

int main(void){
    int T;

    scanf("%d", &T);

    int D;
    char str[31];
    int cCount[31];
    int k = 0;
    while(k++ < T){
        scanf("%d", &D);
        scanf("%s", str);
        int swaps = 0;
        cCount[0] = 0;
        int power = 0;
        if(str[0] == 'S') power++;
        int i, j;
        for(i = 1; i < strlen(str); i++){
            cCount[i] = cCount[i-1];
            if(str[i-1] == 'C')
                cCount[i]++;
            if(str[i] == 'S')
                power += pow(2, cCount[i]);
        }
        for(i = strlen(str)-1; i > 0; i--){
            if(power <= D) break;
            if(str[i-1] == 'C' && str[i] == 'S'){
                swap(str, i-1, i);
                swaps++;
                power -= (pow(2, cCount[i]) - pow(2, cCount[i]-1));
                fixCount(cCount, str);
                if(power <= D) break;
                for(j = i+1; j < strlen(str); j++){
                    if(j >= strlen(str)) break;
                    if(str[j-1] == 'C' && str[j] == 'S'){
                        swap(str, j-1, j);
                        swaps++;
                        power -= (pow(2, cCount[j]) - pow(2, cCount[j]-1));
                        fixCount(cCount, str);
                        if(power <= D) break;
                    }
                }
            }
        }
        if(power > D){
            printf("Case #%d: IMPOSSIBLE\n", k);
        } else printf("Case #%d: %d\n", k, swaps);
    }
    return 0;
}

void swap(char *str, int i, int j){
    char aux = str[i];
    str[i] = str[j];
    str[j] = aux;
}

void fixCount(int *cCount, char *str){
    cCount[0] = 0;
    for(int i = 1; i < strlen(str); i++){
        cCount[i] = cCount[i-1];
        if(str[i-1] == 'C')
            cCount[i]++;
    }
}
