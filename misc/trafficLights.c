#include <stdio.h>

int main(void){
    int T, x, g, y, r, green, yellow, red;

    scanf("%d", &T);
    while(T > 0){
        green = 0;
        yellow = 0;
        red = 0;
        scanf("%d %d %d %d", &x, &g, &y, &r);
        while(x > 0){
            x -= g;
            if(x < 0){
                green = 1;
                break;
            }
            x -= y;
            if(x < 0){
                yellow = 1;
                break;
            }
            x -= r;
            if(x < 0){
                red = 1;
                break;
            }
        }
        if(green)
            printf("GREEN\n");
        if(yellow)
            printf("YELLOW\n");
        if(red)
            printf("RED\n");
        T--;
    }
}
