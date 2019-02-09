#include<bits/stdc++.h>
using namespace std;

int mat[100000][2];

// Driver function to sort the 2D vector
// on basis of a particular column
bool sortcol( const vector<int>& v1, const vector<int>& v2 ) {
    return v1[1] < v2[1];
}

int main() {
    int n;
    scanf("%d", &n);

    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    vector<vector<int>> matv(n, vector<int>(2));

    for(i = 0; i < n; i++){
        for(j = 0; j < 2; j++){
            matv[i][j] = mat[i][j];
        }
    }

    sort(matv.begin(), matv.end(),sortcol);
    
    int c = 0;
    int last = 0;
    for(i = 0; i < n; i++){
        if(matv[i][0] > last){
            c++;
            last = matv[i][1];
        }
    }

    printf("%d\n", c);

    return 0;
}