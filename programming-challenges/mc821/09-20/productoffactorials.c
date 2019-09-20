#include <stdio.h>

int main(){
    unsigned long long int n, i;
    scanf("%lld", &n);
    unsigned long long int ans = 1;
    unsigned long long int fact = 1;
    for(i = 1; i <= n; i++){
        fact = (fact * i) % 109546051211;
        ans = (ans * fact) % 109546051211;
        if(ans == 0){
            printf("0\n");
            return 0;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
