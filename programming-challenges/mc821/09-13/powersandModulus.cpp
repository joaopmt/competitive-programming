#include <bits/stdc++.h>
using namespace std;

long long power(long long x, long long y, long long p) {
    long long res = 1;

    x = x % p;

    while (y > 0) {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main(){
    long long a;
    long long b;

    scanf("%ld %d", &a, &b);

    
    printf("%lld\n", power(a*(a+1)/2, b, a));
    return 0;
}
