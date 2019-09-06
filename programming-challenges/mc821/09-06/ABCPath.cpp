#include <bits/stdc++.h>
using namespace std;


int max_d = 0;
char grid[50][50];
int vis[50][50];
int h, w;

void dfs(int i, int j, int d){
    max_d = max(max_d, d);

    for(int k = i-1; k <= i+1; k++){
        for(int l = j-1; l <= j+1; l++){
            if(k >= h || k < 0 || l >= w || l < 0) continue;
            if(vis[k][l]) continue;
            if(grid[k][l] == grid[i][j] + 1){
                vis[k][l] = 1;
                dfs(k, l, d+1);
            }
        }
    }
}

int main(){

    int t = 1;

    while(true){
        max_d = 0;
        scanf("%d %d", &h, &w);
        if(h == 0 && w == 0) break;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                scanf(" %c", &grid[i][j]);
                vis[i][j] = 0;
            }
        }

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(grid[i][j] == 'A'){
                    vis[i][j] = 1;
                    dfs(i, j, 1);
                    //printf("(%d, %d)\n", c.getI(), c.getJ());
                }
            }
        }

        printf("Case %d: %d\n", t++, max_d);
    }
    return 0;
}
