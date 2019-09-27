#include <bits/stdc++.h>
using namespace std;

int members[100000];

int main(){
    int n, k;

    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) scanf("%d", &members[i]);

    // sort?

    while(k--){
        int max = 0;
        for(int i = 0; i < n-1; i++){
            if(members[i+1] == members[i]+1) max++;
            else
        }
    }

    return 0;
}
