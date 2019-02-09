#include<bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238462643383279502884L

double polygon_area(double r, double n){
    return (n*r*r*sin(2*PI/n))/2;
}

int main() {
    double r, n;

    while(scanf("%lf %lf", &r, &n) == 2){
        printf("%.3lf\n", polygon_area(r, n));
    }
    return 0;
}
