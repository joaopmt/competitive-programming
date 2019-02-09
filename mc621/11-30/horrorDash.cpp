#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n, speed;

    scanf("%d", &t);
    for(int case_ = 1; case_ <= t; case_++){
        int max_speed = 0;
        scanf("%d", &n);
        while(n--){
            scanf("%d", &speed);
            if(speed > max_speed) max_speed = speed;
        }
        printf("Case %d: %d\n", case_, max_speed);
    }
    return 0;
}
