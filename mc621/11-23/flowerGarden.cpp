#include<bits/stdc++.h>
using namespace std;

typedef struct Point{
    int x;
    int y;
} Point;

double dist(Point p1, Point p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

bool isprime(int n){
    if(n == 2)
        return true;
    if(n % 2 == 0 || n <= 1)
        return false;

    int root = (int)sqrt(n);

    for(int i = 3; i <= root; i += 2)
        if(n % i == 0)
            return false;

    return true;
}

int main() {
    int t, n;
    double d;
    Point origin, prev_flower, next_flower;

    origin.x = origin.y = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%d %lf", &n, &d);
        scanf("%d %d", &prev_flower.x, &prev_flower.y);
        n--;
        d -= dist(origin, prev_flower);
        if(d < 0){
            while(n > 0){
                scanf("%d %d", &next_flower.x, &next_flower.y);
                n--;
            }
            printf("0\n");
            continue;
        }
        int ans = 1;
        while(n > 0){
            scanf("%d %d", &next_flower.x, &next_flower.y);
            n--;
            d -= dist(prev_flower, next_flower);
            if(d < 0)
                break;
            ans++;
            prev_flower = next_flower;
        }
        while(n > 0){
            scanf("%d %d", &next_flower.x, &next_flower.y);
            n--;
        }
        while(ans > 0 && !isprime(ans)) ans--;
        printf("%d\n", ans);
    }
    return 0;
}
