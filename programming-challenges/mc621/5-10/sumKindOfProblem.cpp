#include<bits/stdc++.h>
using namespace std;

int main() {
    long long p;
    long long k;
    long long n;

    scanf("%lld", &p);
    while(p--){
        scanf("%lld", &k);
        scanf("%lld", &n);
        printf("%lld %lld %lld %lld\n", k, n*(n+1)/2,n*n,n*(n+1));
    }

    return 0;
}
