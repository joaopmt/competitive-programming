#include <bits/stdc++.h>
using namespace std;

int v[1000000];

long long f(int i, int n){
    long long acc = 0;
    int k = v[i];

    for(int j = i+1; j < n; j++)
        acc += (v[j] - k);
    return acc;
}

int f_binary_search(int x, int n){
    int l = 0;
    int r = n-1;

    while(l <= r){
        int m = (l + r)/2;
        long long k = f(m,n);
        if(k == x)
            return v[m];
        if(k > x)
            l = m + 1;
        else
            r = m - 1;
    }
    int y = ceil( (float) (x - f(l,n)) / (n-l));
    return v[l]-y;
}

int main(){
    int n, m;

    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    sort(v, v+n);

    int h = f_binary_search(m, n);
    printf("%d\n", h);

    return 0;
}
