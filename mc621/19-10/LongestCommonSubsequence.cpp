#include <stdio.h>
#include <string.h>
using namespace std;

char s1[1001], s2[1001];
int L[1001][1001];

int max(int x, int y){
    return (x > y? x : y);
}

int lcs(char *s1, char *s2, int m, int n){

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s1[i-1] == s2[j-1]){
                if(s1[i-1] == '\n')
                    L[i][j] = max(L[i-1][j], L[i][j-1]);
                else L[i][j] = 1 + L[i-1][j-1];
            }
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[m][n];
}

int main() {

    while(fgets(s1,1001,stdin)){
        fgets(s2,1001,stdin);
        memset(L, 0, sizeof(L));
        int m = strlen(s1);
        int n = strlen(s2);
        printf("%d\n", lcs(s1,s2,m,n));
    }
}
