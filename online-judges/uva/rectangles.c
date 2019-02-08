// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3081

#include <stdio.h>

int maior(int v[]){
    int i, maior = 0;

    for(i = maior+1; i < 4; i++){
        if(v[i] > v[maior])
            maior = i;
    }
    return maior;
}

int menor(int v[]){
    int i, menor = 0;

    for(i = menor+1; i < 4; i++){
        if(v[i] < v[menor])
            menor = i;
    }
    return menor;
}
int main(void){
    int T, n, area, i;
    int vx[4], vy[4];

    scanf("%d", &T);
    while(T > 0){
        T--;
        area = 0;
        scanf("%d", &n);
        while(n > 0){
            n--;
            for(i = 0; i < 4; i++){
                scanf("%d %d", &vx[i], &vy[i]);
            }
            area += (vx[maior(vx)]-vx[menor(vx)])*(vy[maior(vy)]-vy[menor(vy)]);
        }
        printf("%d\n", area);
    }
    return 0;
}//pegar a maior diferença ()
