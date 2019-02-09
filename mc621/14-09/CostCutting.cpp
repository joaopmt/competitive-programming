#include<bits/stdc++.h>
using namespace std;

int max(int x, int y){
    return (x>y?x:y);
}

int main() {
    int n, t, v[3];
    scanf("%d", &n);

    t = 1;
    while(n--){
        scanf("%d %d %d",&v[0], &v[1], &v[2]);

        sort(v, v+3);

        printf("Case %d: %d\n", t++, v[1]);
    }
    return 0;
}
