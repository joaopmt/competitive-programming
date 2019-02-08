// https://uva.onlinejudge.org/index.php?Itemid=8&option=com_onlinejudge&page=show_problem&problem=36

#include <stdio.h>
#include <stdlib.h>

int main(void){
	long int i, j, aux, tamCiclo, maior = 0, n;

	while(scanf("%ld %ld", &i, &j) != EOF){
		long int iaux = i;
		long int jaux = j;
		if(i > j){
			aux = i;
			i = j;
			j = aux;
		}
		while(i <= j){
			n = i;
			tamCiclo = 1;
			while(n != 1){
				if(n % 2) n = 3 * n + 1;
				else n /= 2;
				tamCiclo++;
			}
			if(tamCiclo > maior)
				maior = tamCiclo;
			i++;
		}
		printf("%ld %ld %ld\n", iaux, jaux, maior);
	}
	return 0;
}
