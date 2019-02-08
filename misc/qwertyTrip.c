#include <stdio.h>
#include <stdlib.h>

int main(void){
    int T;
    long int N, M, blockX, blockY, i, j;
    long long int paths;

    scanf("%d", &T);
    while(T > 0){
        T--;
        paths = 1;
        scanf("%ld %ld", &N, &M);
        scanf("%ld %ld", &blockX, &blockY);
        blockX--;
        blockY--;
        for(i = 0; i < N; i++){
            for(j = 0; j < M; j++){
                if(i == blockX && j == blockY)
                    continue;
                if((i+1 < N && j+1 < M) && ((i+1 != blockX || j != blockY) && (j+1 != blockY || i != blockX)))
                    paths *= 2;
            }
        }
        printf("%lli\n", paths%1000000007);
    }
    return 0;
}
