#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string str;
	int nums[110];
	int num,size;
	cin >> n;
	getline(cin,str);
	while(n--) {
		getline(cin,str);
		istringstream ss(str);
		size = 0;
		while(ss >> num) {
			nums[size++] = num;
		}
		int m = -1;
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				if(i!=j) {
					int g = __gcd(nums[i],nums[j]);
					if(m < g) {
						m = g;
					}
				}
			}
		}
		cout << m << endl;
	}
	return 0;
}
