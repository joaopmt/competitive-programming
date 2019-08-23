#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    long long t;
    long long a, b;
    long long n;

    scanf("%lld", &t);
    unordered_map<long long, long long> map_a;
    unordered_map<long long, long long> map_b;
    while(t--){
        scanf("%lld", &n);
        map_a = {};
        map_b = {};
        while(n--){
            scanf("%lld %lld", &a, &b);
            if(map_a.find(a) != map_a.end()) map_a[a]++;
            else map_a[a] = 1;
            if(map_b.find(b) != map_b.end()) map_b[b]++;
            else map_b[b] = 1;
        }
        long long ans = 0;
        for(auto tuple : map_a){
            if(map_b.find(tuple.first) != map_b.end())
                ans += tuple.second * map_b[tuple.first];
        }
        printf("%lld\n", ans);
    }
    return 0;
}
