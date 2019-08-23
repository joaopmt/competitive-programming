#include <iostream>
#include <unordered_map>
#include <limits>
using namespace std;


int main(){
    int t, n;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int count = 0;
        for(int i = 5; n/i >=1; i*=5){
            count += n/i;
        }
        printf("%d\n", count);
    }
}
