#include<bits/stdc++.h>
using namespace std;

typedef struct Point{
    double x;
    double y;
} Point;

Point pivot;

int collinear(Point p1, Point p2, Point p3){
    int a = p1.x * (p2.y - p3.y) +
            p2.x * (p3.y - p1.y) +
            p3.x * (p1.y - p2.y);
    if (a == 0)
        return 1;
    else
        return 0;
}

int orientation(Point p, Point q, Point r){
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val >= 0) return 0;  // colinear
    return 1; // clock or counterclock wise
}

double dist(Point p1, Point p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

bool angle_cmp(Point p1, Point p2){
    if(collinear(pivot, p1, p2))
        return dist(pivot, p1) < dist(pivot, p2);
    double d1x = p1.x - pivot.x, d1y = p1.y - pivot.y;
    double d2x = p2.x - pivot.x, d2y = p2.y - pivot.y;
    return (atan2(d1y, d1x) - atan2(d2y, d2x)) < 0;
}

vector<Point> CH(vector<Point> P){
    int i, j, n = (int)P.size();
    if(n <= 3){
        if(!(P[0] == P[n-1])) P.push_back(P[0]);
        return P;
    }

    int P0 = 0;
    for(i = 1; i < n; i++)
        if(P[i].y < P[P0].y || (P[i].y == P[P0].y && P[i].x > P[P0].x))
            P0 = i;

    Point temp = P[0]; P[0] = P[P0]; P[P0] = temp;

    pivot = P[0];
    sort(++P.begin(), P.end(), angle_cmp);

    vector<Point> S;
    S.push_back(P[n-1]); S.push_back(P[0]); S.push_back(P[1]);
    i = 2;
    while(i < n){
        j = (int)S.size()-1;
        if(orientation(S[j-1], S[j], P[i])) S.push_back(P[i++]);
        else S.pop_back();
    }
    return S;
}

int main(){
    int n;
    Point point;

    while(1){
        scanf("%d", &n, &k);
        if(n == 0) break;
        while(n--){
            scanf("%d %d", &point.x, &point.y);
            string res = batmacci(n);
            cout << res[k-1] << endl;
        }

    }

    return 0;
}
