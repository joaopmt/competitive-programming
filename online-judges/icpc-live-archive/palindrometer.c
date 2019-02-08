// https://icpcarchive.ecs.baylor.edu/index.php?option=onlinejudge&page=show_problem&problem=2869

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void){
	int n, i, f, *vetor, *origVetor;
	char miles[10], origMiles[10];
	long int num = 0, tempNum = 0;

	//método: lê o numero de miles atual e monta um número
	//que é o primeiro palíndromo a partir dessas miles;
	//subtraí o número atual do número montado e imprime
	while(1){
		scanf("%s", origMiles);
		if(strcmp(origMiles, "0") == 0)
			break;
		//cria uma cópia, que será transformada num palíndromo
		strcpy(miles, origMiles);
		n = strlen(miles);

		//converte de string para vetor de inteiros
		vetor = calloc(n, sizeof(int));
		origVetor = calloc(n, sizeof(int));
		for(i = 0; i < n; i++){
			vetor[i] = (int) miles[i] - '0';
			origVetor[i] = (int) origMiles[i] - '0';
		}

		//compara cada elemento com seu respectivo espelho
		//e faz as operações necessárias para que se possa
		//tornar ambos iguais sem cometer erros de matematica
		//(e.g. diminuir magicamente o numero de miles)
		f = n - 1;
		i = 0;
		while(i < f){
			if(vetor[f] > vetor[i])
				vetor[f-1]++;
			i++; f--;
		}

		//lida com possíveis "10" na primeira metade do vetor:
		//caso par
		if(!(n%2)){
			for(i = (n/2) - 1; i > 0; i--){
				if(vetor[i] == 10){
					vetor[i] = 0;
					vetor[i-1]++;
				}
			}
		}
		//caso ímpar
		if((n%2)){
			for(i = (n/2); i > 0; i--){
				if(vetor[i] == 10){
					vetor[i] = 0;
					vetor[i-1]++;
				}
			}
		}
		//espelha a primeira metade do vetor na ultima metade
		//tornando-o palíndromo
		f = n - 1;
		i = 0;
		while(i < f){
			vetor[f] = vetor[i];
			i++; f--;
		}
		//converte os vetores para numeros
		for(i = 0; n > 0; n--, i++){
			num += vetor[n-1] * pow(10, i);
			tempNum += origVetor[n-1] * pow(10, i);
		}
		printf("%ld\n", num - tempNum);
		num = 0; tempNum = 0;
	}

	return 0;
}
