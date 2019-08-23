#include <iostream>
#include <unordered_map>
#include <limits>
using namespace std;

void floyd(long long dist[101][101], int n){
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}


void anti_floyd(long long dist[101][101], int n){
    for(int k = n; k >= 1; k--){
        for(int i = n; i >= 1; i--){
            for(int j = n; j >= 1; j--){
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}


int main(){
    int T, n;
    long long dist[101][101];

    scanf("%d", &T);

    for(int t = 1; t <= T; t++){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            for(int j = 1; i <= n; i++)
                dist[i][j] = std::numeric_limits<long long>::max();
            dist[i][i] = 0;
        }
        for(int i = 1; i <= n-1; i++){
            for(int j = 1; j <= i; j++){
                scanf("%lld", &dist[i+1][j]);
                dist[j][i+1] = dist[i+1][j];
            }
        }
        floyd(dist, n);
        printf("Case #%d:\n", t);
        // It's actually ANTI floyd fuck
    }
    return 0;
}
