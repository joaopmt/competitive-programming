#include<stdio.h>
#include <math.h>

typedef struct Point{
    double x;
    double y;
} Point;

//Point candles[1000];

double dist(Point p1, Point p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

int main() {
    int m, n;
    Point book, candle;

    scanf("%d", &m);
    while(m--){
        scanf("%lf %lf", &book.x, &book.y);
        scanf("%d", &n);
        int i;
        int flag = 0;
        for(i = 0; i < n; i++){
            scanf("%lf %lf", &candle.x, &candle.y);
            if(dist(book, candle) <= 8.000000){
                flag = 1;
            }
        }
        if(flag) printf("light a candle\n");
        else printf("curse the darkness\n");
    }
    return 0;
}
