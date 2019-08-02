#include<bits/stdc++.h>
using namespace std;

long long v[1000];

int cmpfunc (const void * a, const void * b){
    return *(long long int*)a - *(long long int*)b ;
   
}

long long mod_(long long x, long long y){
    if(x < 0){
        long long d = x/y;
        d *= -1;
        return (d+1)*y + x;
    }
    else return x % y;
}

int gcd(int a, int b){ 
    if(a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main() {

    while(true){
        int i;
        for(i = 0; true; i++){
            scanf("%lld", &v[i]);
            if(v[i] == 0) break;
        }
        if(v[0] == 0) break;
        long long x = abs(v[0] - v[1]);
        for(int j = 2; j < i; j++){
            x = gcd(x, abs(v[j]-v[j-1]));
        }
        printf("%lld\n", x);
    }
}
