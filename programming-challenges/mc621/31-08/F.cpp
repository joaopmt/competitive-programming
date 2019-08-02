#include<bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    scanf("%ld",&x);
    long long k = 0;
    if(x == 1) {
        printf("1\n");
        return 0;
    }
    for(int i = 2;x != 1;i++) {
        if(i > sqrt(x)) {
            k++;
            break;
        }
        while(x % i == 0) {
            x /= i;
            k++;
        }
    }
    printf("%ld\n",k);
    return 0;
}
