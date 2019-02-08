// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3301

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int squares(int n, int vet[]){

	if(n == 0 || n == 1)
		return n;
	if(vet[n] != 0)
		return vet[n];
	vet[n] = pow(n, 2) + squares(n-1, vet);
	return vet[n];
}

int main(void){
	int n, res, vet[50] = {0};

	while(1){
		scanf("%d", &n);
		res = squares(n, vet);
		if(!res)
			return 0;
		printf("%d\n", res);
	}
	return 0;
}
