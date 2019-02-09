#include <bits/stdc++.h>
using namespace std;

int D[2001][2001];

int tracksSize[20];

int bestSet[20];
int bestSetSize = 0;
int bestSum = 0;
int tempSetSize = 0;

void find_best_set(vector<int> tempSet, int sum, int i, int tapeSize, int nt){
    sum += tracksSize[i];
    if(sum > tapeSize) return;

    tempSet.push_back(tracksSize[i]);

    if((sum == bestSum && tempSet.size() > bestSetSize) || sum > bestSum){
        bestSum = sum;
        for(int j = 0; j < tempSet.size(); j++)
            bestSet[j] = tempSet[j];
        bestSetSize = tempSet.size();
    }
    for(int j = i+1; j < nt; j++)
        find_best_set(tempSet, sum, j, tapeSize, nt);
}

int main(){
   int tapeSize, nt;

   while(scanf("%d", &tapeSize) == 1){
       bestSetSize = 0;
       bestSum = 0;
       scanf("%d", &nt);
       for(int i = 0; i < nt; i++){
           scanf("%d", &tracksSize[i]);
       }
       for(int i = 0; i < nt; i++){
           vector<int> tempSet;
           find_best_set(tempSet, 0, i, tapeSize, nt);
       }
       for(int i = 0; i < bestSetSize; i++){
           printf("%d ", bestSet[i]);
       }
       printf("sum:%d\n", bestSum);
   }

   return 0;
}
