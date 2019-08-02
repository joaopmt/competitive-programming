#include <stdio.h>
#include <stdlib.h>

char s[1001];
int out[1001];

void clear(int out[], int n){
    int i;
    for(i = 1; i <= n; i++)
        out[i] = 0;
}

int main(void){
    int tc, p, i, j;

    scanf("%d", &tc);
    while(tc-- > 0){
        int min = 1000;
        scanf("%d", &p);
        clear(out, p);
        for(i = 1; i <= p; i++){
            scanf(" %[^\n]s", s);
            for(j = 0; s[j] != '\0'; j++)
                if(s[j] == ' ') out[i]++;
            if(out[i] < min) min = out[i];
        }
        int first = 1;
		for(i = 1; i <= p; i++){
			if(out[i] == min){
				if(!first)
					printf(" ");
				printf("%d", i);
				first = 0;
			}
		}
		printf("\n");
	}
    return 0;
}
