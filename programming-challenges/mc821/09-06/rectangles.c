#include <stdio.h>


int rect(int n){
    if(n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n % 2 == 0) return 2 + rect(n-1);
    //return n + rect(n/2) -1;
    else return 1 + rect(n-1);
}


int main(){
    int n;

    scanf("%d", &n);
    printf("%d\n", rect(n));
    return 0;
}
