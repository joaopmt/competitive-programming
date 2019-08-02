#include <iostream>
#include <queue>
using namespace std;

int G[2005][2005];

// This function returns true if graph G[V][V] contains
// odd cycle, else false
bool containsOdd(int src, int V){
    // Create a color array to store colors assigned
    // to all veritces. Vertex number is used as index
    // in this array. The value '-1' of  colorArr[i]
    // is used to indicate that no color is assigned to
    // vertex 'i'.  The value 1 is used to indicate first
    // color is assigned and value 0 indicates second
    // color is assigned.
    int colorArr[V];
    for (int i = 0; i < V; ++i)
        colorArr[i] = -1;

    // Assign first color to source
    colorArr[src] = 1;

    // Create a queue (FIFO) of vertex numbers and
    // enqueue source vertex for BFS traversal
    queue <int> q;
    q.push(src);

    // Run while there are vertices in queue (Similar to BFS)
    while (!q.empty()){
        // Dequeue a vertex from queue
        int u = q.front();
        q.pop();

        // Find all non-colored adjacent vertices
        for (int v = 0; v < V; ++v){
            // An edge from u to v exists and destination
            // v is not colored
            if (G[u][v] && colorArr[v] == -1){
                // Assign alternate color to this adjacent
                // v of u
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }

            // An edge from u to v exists and destination
            // v is colored with same color as u
            else if (G[u][v] && colorArr[v] == colorArr[u])
                return true;
        }
    }

    // If we reach here, then all adjacent
    // vertices can be colored with alternate
    // color
    return false;
}

void zero_matrix(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            G[i][j] = 0;
    }
}

int main() {
    int n_scs, n_bugs, n_inters;


    zero_matrix(2005);

    scanf("%d", &n_scs);
    for(int i = 1; i <= n_scs; i++){
        scanf("%d %d", &n_bugs, &n_inters);

        int bug_a, bug_b;
        while(n_inters-- > 0){
            scanf("%d %d", &bug_a, &bug_b);
            if(bug_a != bug_b)
                G[bug_a-1][bug_b-1] = G[bug_b-1][bug_a-1] = 1;
        }
        bool x = containsOdd(bug_a-1, 2005);
        if(x)
            printf("Scenario #%d:\nSuspicious bugs found!\n", i);
        else
            printf("Scenario #%d:\nNo suspicious bugs found!\n", i);
        zero_matrix(2005);
    }

    return 0;
}
