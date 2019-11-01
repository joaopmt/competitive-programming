#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n){
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (long long i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}


int main(){
    long long num;
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%lld", &num);
        long long sqr=sqrt(num);
        if(sqr*sqr == num && is_prime(sqr))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
