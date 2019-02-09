#include <stdio.h>

typedef struct key_index{
    int key;
    int index;
} key_index;

key_index a[100000], L[100000], R[100000];




void merge(key_index arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    for (i = 0; i < n1; i++){
        L[i].key = arr[l + i].key;
        L[i].index = arr[l + i].index;
    }
    for (j = 0; j < n2; j++){
        R[j].key = arr[m + 1+ j].key;
        R[j].index = arr[m + 1+ j].index;
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].key <= R[j].key)
        {
            arr[k].key = L[i].key;
            arr[k].index = L[i].index;
            i++;
        }
        else
        {
            arr[k].key = R[j].key;
            arr[k].index = R[j].index;
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k].key = L[i].key;
        arr[k].index = L[i].index;
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k].key = R[j].key;
        arr[k].index = R[j].index;
        j++;
        k++;
    }
}

void mergeSort(key_index arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;


        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int binarySearch(key_index arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;

        if (arr[m].key == x && (m == 0 || (m-1 >= 0 && arr[m-1].key < x)))
            return m;

        if (arr[m].key < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

int main(void){
    int n, m, i;

    while((scanf("%d %d", &n, &m) == 2)){

        for(i = 0; i < n; i++){
            scanf("%d", &(a[i].key));
            a[i].index = i+1;
        }

        mergeSort(a, 0, n-1);

        int k, v;
        while(m-- > 0){
            scanf("%d %d", &k, &v);
            i = binarySearch(a, 0, n-1, v);
            if(i == -1 || a[i+(k-1)].key != v)
                printf("0\n");
            else
                printf("%d\n", a[i+(k-1)].index);
        }
    }

	return 0;
}
