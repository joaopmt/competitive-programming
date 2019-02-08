// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=49

#include <stdio.h>
#include <math.h>
/**
double pot(long int k, int n){
    double res = 1;
    int i;
    for(i = 0; i < n; i++)
        res *= k;
    return res;
}

long int buscaBin(int n, double p){
    long int e = 1, m, d = 1000000000;

    while(e <= d){
        m = (e + d) / 2;
        if(pot(m, n) == p)
            return m;
        if(pot(m, n) > p)
            d = m - 1;
        else
            e = m + 1;
    }
    return -1;
}

int main(void){
    int n;
    double p;
    long int k, e = 1, m, d = 1000000000;

    while(scanf("%d %lf", &n, &p) == 2)
        printf("%ld\n", buscaBin(n, p));
    return 0;
}
**/
int main(void){
    double n, p;

    while(scanf("%lf %lf", &n, &p) == 2)
        printf("%.0lf\n", pow(p, 1/n));
    return 0;
}
