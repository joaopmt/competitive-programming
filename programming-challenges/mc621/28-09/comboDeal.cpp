#include <bits/stdc++.h>
using namespace std;
int main(){
    int n_itens, n_combos, n_pedidos, i, j, maior, maior_ind=0;
    std::vector<int> precos;
    std::vector<std::vector<int>> combos, pedidos;
    while(cin >> n_itens){
        for(i=0; i<n_itens; i++){
            cin >> precos[i];
        }
        cin >> n_combos;
        for(i=0; i<n_combos; i++){
            for(j=0; j<=n_itens; j++){
                cin >> combos[i][j];
            }
        }
        cin >> n_pedidos;
        for(i=0; i<n_pedidos; i++){
            for(j=0; j<n_itens; j++){
                cin >> pedidos[i][j];
                if(pedidos[i][j]>=combos[i][j]){

                }
            }
        }
    }
    return 0;
}
