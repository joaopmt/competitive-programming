#include <stdio.h>

int c = 0;

void count(char mat[33][33], int i, int j, int n){

    if(mat[i][j] == '#' || mat[i][j] == '-')
        return;
    mat[i][j] = '-';

    int l,r,u,d;
    l = r = u = d = 1;
    if(j == 0 || mat[i][j-1] == '#'){
        c++;
        l = 0;
    }
    if(j == n-1 || mat[i][j+1] == '#'){
        c++;
        r = 0;
    }
    if(i == 0 || mat[i-1][j] == '#'){
        c++;
        u = 0;
    }
    if(i == n-1 || mat[i+1][j] == '#'){
        c++;
        d = 0;
    }

    if((i == 0 && j == 0) ||(i == n-1 && j == n-1)) c -= 2;

    if(j > 0) count(mat, i, j-1, n);
    if(j < n-1) count(mat, i, j+1, n);
    if(i > 0) count(mat, i-1, j, n);
    if(i < n-1) count(mat, i+1, j, n);

    return;
}


int main(){
    int n;
    char mat[33][33];

    scanf("%d", &n);
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf(" %c", &mat[i][j]);
        }
    }

    count(mat, 0, 0, n);
    int c1 = c;
    c = 0;
    count(mat, n-1, n-1, n);
    int c2 = c;

    printf("%d\n", (c1+c2)*9);

    return 0;
}
