#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> v;
set <pair<int,int>> s;
pair <int, int> element;

void swap(long* a, long* b){
    long t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int n;
    long arr[3000], arr_sorted[3000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%ld", &arr[i]);
        arr_sorted[i] = arr[i];
    }
    sort(arr_sorted, arr_sorted+n);

    for(int i = 0; i < n; i++){
        if(arr[i] == arr_sorted[i]) continue;
        for(int j = i+1; j < n; j++){
            if(arr[j] == arr_sorted[i]){
                swap(&arr[i], &arr[j]);
                v.push_back(make_pair(i, j));
                break;
            }
        }
    }
    printf("%d\n", v.size());
    for(int i = 0; i < v.size(); i++){
        printf("%d %d\n", v[i].first, v[i].second);
    }
    return 0;
}
