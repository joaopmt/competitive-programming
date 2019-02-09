#include <iostream>
#include <limits>

using namespace std;

#define INFINITY (std::numeric_limits<int>::max())

int nc[1000001];

int main(){
    int t, p, n, c[100];
    
    scanf("%d", &t);
    while(t-- > 0){
        scanf("%d", &p);
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%d", &c[i]);
    
        int max_v = 0;
        for(int i = 0; i < n; i++){
            max_v += c[i];   
        }
    
        nc[0] = 0;
        for(int i = 1; i <= max_v; i++)
            nc[i] = INFINITY;
        
        for(int i = 0; i < n; i++){
            for(int v = max_v - c[i]; v >= 0; v--){
                if(nc[v] < INFINITY)
                    nc[v+c[i]] = (nc[v+c[i]] < nc[v]+1? nc[v+c[i]] : nc[v]+1);
            }   
        }
        int v;
        for(v = p; v <= max_v; v++)
            if(nc[v] < INFINITY) break;
        printf("%d %d\n", v, nc[v]);
    }
    
    return 0;
}
