// http://acm.timus.ru/problem.aspx?space=1&num=1021

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int lista1[50000], lista2[50000];
	int n1, n2, i, esq, dir, meio;

	scanf("%d", &n1);
	for(i = 0; i < n1; i++)
		scanf("%d", &lista1[i]);
	scanf("%d", &n2);
	for(i = 0; i < n2; i++)
		scanf("%d", &lista2[i]);

	for(i = n1-1; i >= 0; i--){
		esq = 0;
		dir = n2 - 1;
		//busca binária: bem mais rápido, principalmente para casos enormes (e.g. 50000 em cada lista)
		while(esq <= dir){
			meio = (esq + dir) / 2;
			if(lista1[i] + lista2[meio] < 10000)
				dir = meio - 1;
			else if(lista1[i] + lista2[meio] > 10000)
				esq = meio + 1;
			else{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
