#include<stdio.h>

int main() {
    int n, s, d;
    scanf("%d", &n);

    while(n--){
        scanf("%d %d",&s,&d);

        if(d > s || (s-d)%2==1){
            printf("impossible\n");
            continue;
        }
        int x, y;

        y = (s-d)/2;
        x = s - y;
        
        printf("%d %d\n", x,y);
    }
    return 0;
}
