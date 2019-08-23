#include <stdio.h>
#include <limits.h>

int main(){
    int n, q, arr[100000], i, j, k, l;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &q);
    for(i = 0; i < q; i++){
        scanf("%d %d", &k, &l);
        int min = INT_MAX;
        for(j = k; j <= l; j++){
            if(arr[j] < min) min = arr[j];
        }
        printf("%d\n", min);
    }
    return 0;
}
