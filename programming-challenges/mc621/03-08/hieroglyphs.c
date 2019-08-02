#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct List{
    char word[3];
    struct List *next;
} List;

int main(void){
    int n, i;
    List *v[26];
    char word[3];

    for(i = 0; i < 26; i++) v[i] = NULL;

    scanf("%d", &n);
    while(n-- > 0){
        List *node = malloc(sizeof(List));
        scanf("%s", word);
        strcpy(node->word, word);
        int k = node->word[0]-97;
        node->next = v[k];
        v[k] = node;
    }
    char c;
    scanf(" %c", &c);
    List *p = v[c-97];
    while(p != NULL){
        printf("%s\n", p->word);
        p = p->next;
    }

    return 0;
}
