#include<bits/stdc++.h>
using namespace std;

string batmacci(int tamanho){
    vector<string> array;
    array.push_back("N");
    array.push_back("A");
    if (tamanho == 0){
        return array[0];
    } else if (tamanho == 1){
        return array[1];
    } else {
        for(int i=0; i<tamanho-2;i++){
            string a = array[0] + array[1];
            array[0] = array[1];
            array[1] = a;
        }
        return array[1];
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    string res = batmacci(n);
    cout << res[k-1] << endl;
    return 0;
}
