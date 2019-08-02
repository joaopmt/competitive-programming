#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n, m, u, v, inc_matrix[9][50];

    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &inc_matrix[i][j]);
            }
        }
        bool error = false;
        int adj_matrix[9][9] = {};
        for(int j = 0; j < m; j++){
            int count = 0;
            for(int i = 0; i < n; i++){
                if(inc_matrix[i][j]){
                    if(!count) u = j;
                    else v = j;
                    count++;
                }
            }
            if(count != 2 || adj_matrix[u][v]){
                error = true;
                break;
            }
            adj_matrix[u][v] = adj_matrix[v][u] = 1;
        }
        if(!error) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
