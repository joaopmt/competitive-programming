#include <stdio.h>
#include <stdlib.h>

int a[200000], b[200000];

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int binarySearch(int arr[],  int l,  int r,  int x){
    while (l <= r){
        int m = l + (r-l)/2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return r;
}

int main(void){
     int n, m, i;

    while((scanf("%d %d", &n, &m)==2)){

        for(i = 0; i < n; i++)  scanf("%d", &a[i]);
        for(i = 0; i < m; i++)  scanf("%d", &b[i]);

        qsort(a, n, sizeof( int), cmpfunc);

        for(i = 0; i < m; i++){
            int k = binarySearch(a, 0, n-1, b[i]);
            while(b[i] >= a[k] && k < n) k++;
            printf("%d ", k);
        }
    }

	return 0;
}
