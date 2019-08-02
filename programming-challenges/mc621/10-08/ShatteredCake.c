#include <stdio.h>

int main(void){

    int n;
    int W, wi, li;
    while(scanf("%d %d", &W, &n) == 2) {
        long int area = 0;
        while(n-- > 0){
            scanf("%d %d", &wi, &li);
            area += wi * li;
        }
        printf("%ld\n", area/W);
    }

    return 0;
}
