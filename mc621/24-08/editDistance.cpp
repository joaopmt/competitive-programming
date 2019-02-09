#include <bits/stdc++.h>
using namespace std;

int D[2001][2001];

int min(int x, int y, int z){
   int w = (y < z? y : z);
   return (x < w? x : w);
}

int edit_distance(char *s1, char *s2){

   int n = strlen(s1);
   int m = strlen(s2);

   for(int i = 0; i <= n; i++){
      for(int j = 0; j <= m; j++){
         if(i == 0) D[i][j] = j;
         else if(j == 0) D[i][j] = i;
         else if(s1[i-1] == s2[j-1]) D[i][j] = D[i-1][j-1];
         else D[i][j] = 1 + min(D[i][j-1], D[i-1][j], D[i-1][j-1]);
      }
   }
   return D[n][m];
}

int main(){
   int t;
   char s1[2001], s2[2001];

   scanf("%d", &t);
   while(t--){
      scanf(" %s %s", s1, s2);
      printf("%d\n", edit_distance(s1,s2));
   }

   return 0;
}
