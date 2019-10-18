#include <bits/stdc++.h>
using namespace std;

int color[100010];
vector<int> ans;
vector<int> adj[100010];
int mains[100010];

void dfs(int s){
    if(!color[s]){
        color[s] = 1;
        for(int v : adj[s]) dfs(v);
        color[s] = 2;
        ans.push_back(s);
    } else if(color[s] == 1){
        printf("-1");
        exit(0);
    }
}

int main(){
    int n, k;
    int dep, t;

    scanf("%d %d", &n, &k);
    for(int i = 0; i < k; i++)
        scanf("%d", &mains[i]);
    for(int i = 1; i <= n; i++){
        scanf("%d", &t);
        for(int j = 0; j < t; j++){
            scanf("%d", &dep);
            adj[i].push_back(dep);
        }
    }

    memset(color, 0, sizeof(color));

    for(int i = 0; i < k; i++)
        if(!color[mains[i]]) dfs(mains[i]);

    printf("%d\n", ans.size());
    for(int i = 0; i < ans.size(); i++)
		printf("%d ", ans[i]);
    printf("\n");

    return 0;
}
