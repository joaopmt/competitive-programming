#include <bits/stdc++.h>
using namespace std;

int is_prime[10000000];

void sieve(int n) {
    // We cross out all composites from 2 to sqrt(N)
    int i=2;
    // This will loop from 2 to int(sqrt(x))
    while(i*i <= n) {
        // If we already crossed out this number, then continue
        if(is_prime[i] == 0) {
            i++;
            continue;
        }
        int j = 2*i;
        while(j < n) {
            // Cross out this as it is composite
            is_prime[j] = 0;
            // j is incremented by i, because we want to cover all multiples of i
            j += i;
        }
        i++;
    }
}
int main(){
    int n;

    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        is_prime[i] = 1;
    }
    is_prime[0] = 0;
    is_prime[1] = 0;
    sieve(n);
    int a = 2;
    while(true){
        if(is_prime[a] == 1){
            int b = n-a;
            if(is_prime[b] == 1){
                printf("%d %d\n", a, b);
                return 0;
            }
        }
        a++;
        if(a >= n){
            printf("-1\n");
            return 0;
        }
    }

    return 0;
}
