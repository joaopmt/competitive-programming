// https://codeforces.com/problemset/problem/764/A

#include <stdio.h>

int main(void){
    int n, m, z;
    scanf("%d %d %d", &n, &m, &z);
    int res = 0;
    int aux = m;
    while(aux <= z){
        if(aux % n == 0)
            res++;
        aux += m;
    }
    printf("%d\n", res);
    return 0;
}
