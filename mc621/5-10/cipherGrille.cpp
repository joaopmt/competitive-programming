#include<bits/stdc++.h>
using namespace std;

void rotate(char m[4][4]) {
    int n = 4;
    int x = floor(n/ 2);
    int y = n - 1;
    for (int i = 0; i < x; i++) {
        for (int j = i; j < y - i; j++) {
            int k = m[i][j];
            m[i][j] = m[y - j][i];
            m[y - j][i] = m[y - i][y - j];
            m[y - i][y - j] = m[j][y - i];
            m[j][y - i] = k;
        }
    }
}

int main() {
    char cg[4][4];
    char m[4][4];
    char m_[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf(" %c", &cg[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf(" %c", &m[i][j]);
        }
    }

    for(int k = 0; k < 4; k++){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(cg[i][j] == 'X') printf("%c", m[i][j]);
            }
        }
        rotate(cg);
    }

    printf("\n");
    return 0;
}
