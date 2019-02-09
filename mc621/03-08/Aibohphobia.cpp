#include <iostream>
#include <cstring>
using namespace std;

void invert(char *s, char *s_inv){
   int n = strlen(s);
   for(int i = n-1; i >= 0; i--){
      s_inv[n-1-i] = s[i];
   }
   s_inv[n] = '\0';
}

int max(int x, int y){
   return x > y? x : y;
}

int lcs(char *X, char *Y){
   int n = strlen(X);
   int L[n+1][n+1];

   for(int i = 0; i <= n; i++){
      for(int j = 0; j <= n; j++){
         if(i == 0 || j == 0)
            L[i][j] = 0;
         else if(X[i-1] == Y[j-1])
            L[i][j] = 1 + L[i-1][j-1];
         else
            L[i][j] = max(L[i-1][j], L[i][j-1]);
      }
   }
   return L[n][n];
}

int main(){
   int t;
   char s[6101], s_inv[6101];

   scanf("%d", &t);
   while(t--){
      scanf(" %s", s);
      invert(s, s_inv);
      printf("%d\n", strlen(s) - lcs(s, s_inv));
   }

   return 0;
}
