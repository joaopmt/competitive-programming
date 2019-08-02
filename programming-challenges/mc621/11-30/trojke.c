#include<stdio.h>

typedef struct Point{
    double x;
    double y;
} Point;

Point points[10000];

int collinear(Point p1, Point p2, Point p3){
    int a = p1.x * (p2.y - p3.y) +
            p2.x * (p3.y - p1.y) +
            p3.x * (p1.y - p2.y);
    if (a == 0)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    char c;
    Point point;

    int m = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf(" %c", &c);
            if(c != '.'){
                point.x = j;
                point.y = i;
                points[m++] = point;
            }
        }
    }
    long long ans = 0;
    for(int i = 0; i < m-2; i++){
        for(int j = i+1; j < m-1; j++){
            for(int k = j+1; k < m; k++){
                if(collinear(points[i], points[j], points[k]))
                    ans++;
            }
        }
    }
    printf("%lld\n", ans);
    return 0;
}
