#include<bits/stdc++.h>
using namespace std;

int main() {
    int problems[26];
    int time_;
    char problem, result[7];

    for(int i = 0; i < 26; i++){
        problems[i] = 0;
    }
    int time_sum = 0;
    while(1){
        scanf("%d", &time_);
        if(time_ == -1) break;
        scanf(" %c %s", &problem, result);
        if(strcmp(result, "right") == 0){
            time_sum += problems[problem-65]*20;
            time_sum += time_;
            problems[problem-65] = -1;
        } else{
            problems[problem-65]++;
        }
    }
    int n = 0;
    for(int i = 0; i < 26; i++){
        if(problems[i] == -1) n++;
    }
    printf("%d %d\n", n, time_sum);
    return 0;
}
