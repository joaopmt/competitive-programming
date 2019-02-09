#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n;
    while(scanf("%d", &n) == 1) {
        long int A[3] = {0};
        long int B[3] = {0};
        long int x;
        int i, j;
        for(i = 0; i < n; i++){
            scanf("%ld", &x);
            A[i%3] += x;
        }
        for(i = 0; i < n; i++){
            scanf("%ld", &x);
            B[i%3] += x;
        }
        long int areaSum[3] = {0};
        for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++)
                areaSum[(i+j)%3] += A[i]*B[j];
        }
        printf("%ld %ld %ld\n", areaSum[1], areaSum[2], areaSum[0]);
    }

    return 0;
}
