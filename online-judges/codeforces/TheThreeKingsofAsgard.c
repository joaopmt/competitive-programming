// http://codeforces.com/problemset/gymProblem/100947/D

#include <stdio.h>

int main(void){
    int T;
    long int pf, a, b, c;

    scanf("%d", &T);

    while(T > 0){
        T--;
        scanf("%ld", &pf);
        a = pf;
        b = pf;
        c = pf;
        if(a%2 != 0){
            printf("Impossible\n");
            continue;
        }
        c += a/2;
        a -= a/2;
        if(c%2 != 0){
            printf("Impossible\n");
            continue;
        }
        b += c/2;
        c -= c/2;
        if(b%2 != 0){
            printf("Impossible\n");
            continue;
        }
        a += b/2;
        b -= b/2;
        printf("%ld %ld %ld\n", a, b, c);
    }
    return 0;
}
