#include<bits/stdc++.h>
using namespace std;

int main() {
    long int c, n_in, n_out, n_stay;
    int n;

    scanf("%ld %d", &c, &n);
    bool possible = true;
    long int passenger_count = 0;
    while(n--){
        scanf("%ld %ld %ld", &n_out, &n_in, &n_stay);
        passenger_count -= n_out;
        if(passenger_count < 0){
            possible = false;
            break;
        }
        passenger_count += n_in;
        if(passenger_count > c){
            possible = false;
            break;
        }
        if(n_stay > 0 && passenger_count < c){
            possible = false;
            break;
        }
    }
    if(passenger_count > 0) possible = false;
    if(possible) printf("possible\n");
    else printf("impossible\n");
    return 0;
}
