#include <stdio.h>

#define PRIME_MASK ((1ULL <<  2) | (1ULL <<  3) | (1ULL <<  5) | (1ULL <<  7) |\
                    (1ULL << 11) | (1ULL << 13) | (1ULL << 17) | (1ULL << 19) |\
                    (1ULL << 23) | (1ULL << 29) | (1ULL << 31) | (1ULL << 37) |\
                    (1ULL << 41) | (1ULL << 43) | (1ULL << 47) | (1ULL << 53) |\
                    (1ULL << 59) | (1ULL << 61))

int isprime(int n){
    if(n <= 63)
        return (PRIME_MASK >> n) & 1;
    if(n % 2 == 0)
        return 0;
    int k;
    for(k = 3; k*k <= n; k += 2){
        if(n % k == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n;

    while(1){
        scanf("%d", &n);
        if(n == 0) break;

        int exists = 0;
        int i = (n == 4? 2 : 3);
        for(; i <= n/2; i += 2){
            if(isprime(i) && isprime(n-i)){
                printf("%d = %d + %d\n", n, i, n-i);
                exists = 1;
                break;
            }
        }
        if(exists) continue;
        printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
