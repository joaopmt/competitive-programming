#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void){
	int n, i, f;
	char s[2002];
	int v[2001];

	scanf("%s", s);
	n = strlen(s);

	//converte de string para v de inteiros
	for(i = 0; i < n; i++){
		v[i] = s[i] - '0';
	}

	//compara cada elemento com seu respectivo espelho
	//e faz as operações necessárias para que se possa
	//tornar ambos iguais sem cometer erros de matematica
	//(e.g. diminuir magicamente o numero de miles)
	f = n - 1;
	i = 0;
	while(i < f){
		if(v[f] > v[i])
			v[f-1]++;
		i++; f--;
	}

	//lida com possíveis "10" na primeira metade do v:
	//caso par
	if(!(n%2)){
		for(i = (n/2) - 1; i > 0; i--){
			if(v[i] == 10){
				v[i] = 0;
				v[i-1]++;
			}
		}
	}
	//caso ímpar
	if((n%2)){
		for(i = (n/2); i > 0; i--){
			if(v[i] == 10){
				v[i] = 0;
				v[i-1]++;
			}
		}
	}
	//espelha a primeira metade do v na ultima metade
	//tornando-o palíndromo
	f = n - 1;
	i = 0;
	while(i < f){
		v[f] = v[i];
		i++; f--;
	}
	for(i = 0; i < n; i++)
		printf("%d", v[i]);
	printf("\n");

	return 0;
}
