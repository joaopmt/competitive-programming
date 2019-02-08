// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//método: ler todo o texto caracter por caracter
//e imprimir substituindo as "" corretamente
int main(void){
	char *texto, letra;
	int i, j, cont, n;

	//lê caracter até o fim do arquivo;
	//vai alocando espaço para a string
	//enquanto lê
	texto = malloc(sizeof(char));
	i = 0;
	cont = 0;
	while(scanf("%c", &letra) != EOF){
		texto = realloc(texto, sizeof(char) + cont);
		cont++;
		texto[i] = letra;
		i++;
	}
	texto[i] = '\0'; //marca o fim da string

	//imprime substituindo as ""
	n = strlen(texto);
	cont = 0;
	i = 0;
	for(i = 0; i < n; i++){
		if(texto[i] != '"')
            printf("%c", texto[i]);
        if(texto[i] == '"' && !(cont % 2)){
            printf("``");
			cont++;
		}
        else if(texto[i] == '"' && (cont % 2)){
            printf("''");
			cont++;
		}
	}
	return 0;
}
