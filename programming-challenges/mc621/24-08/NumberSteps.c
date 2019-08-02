#include <stdio.h>

int main(void){
     int n, x, y;

     scanf("%d", &n);

     while(n--){
        scanf("%d %d", &x, &y);

        if(y <= x){
            if(!(x%2) && !(y%2)) printf("%d\n", x+y);
            else if(x%2 && y%2)  printf("%d\n", x+y-1);
            else printf("No Number\n");
        } else printf("No Number\n");
     }


     return 0;
}
