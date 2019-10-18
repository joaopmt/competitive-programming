#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    string s;
    string t;
    vector<int> pos;

    scanf("%d\n", &T);
    while(T--){
        getline(cin, s, ' ');
        getline(cin, t);
        int count = 0;
        int found = s.find(t);
        while(found!=string::npos){
            count++;
            pos.push_back(found);
            found = s.find(t, found+1);
        }
        if(count == 0) printf("Not Found\n");
        else{
            printf("%d\n", count);
            for(int p : pos) printf("%d ", p+1);
            printf("\n");
        }
        pos.clear();
        printf("\n");
    }

    return 0;
}
