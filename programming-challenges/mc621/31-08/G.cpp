#include <bits/stdc++.h>
using namespace std;

long long sol[510][510];
long long solve(int n, int b) {
	if(sol[n][b] != -1) return sol[n][b];
	if(n == 0) return 0;
	if(b == 0) return 0;
	if(b == 1) return 1;
	sol[n][b] = 0;
	for(int i = 1; i*b <= n;i++) {
		sol[n][b] += solve(n-i*b,b-1);
	}
	return sol[n][b];
}

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			sol[i][j] = -1;
		}
	}
        long long ans = 0;	
	for(int i = 1;i < n;i++) {
		for(int j = 1;j*i <= n;j++) {
			if(n - j*i >= 1) {
				ans += solve(n - j*i,i-1);
			}
		}
	}
	printf("%d\n",ans);
}
