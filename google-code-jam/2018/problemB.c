#include <stdio.h>
#include <stdlib.h>

typedef struct Pilha{
    unsigned long long n;
    unsigned long long k;
    struct Pilha *prox;
} Pilha;

void push(Pilha *p, int n){
    Pilha *novoNo = malloc(sizeof(Pilha));
    novoNo->n = n;

    if(p->prox){
        novoNo->k = (p->prox->k)*10;
    } else{
        novoNo->k = 1;
    }
    novoNo->prox = p->prox;
    p->prox = novoNo;
}

Pilha pop(Pilha *p){
    //assert(p->prox);
    Pilha topo = *(p->prox);
    Pilha *aux = p->prox;
    p->prox = p->prox->prox;
    free(aux);
    return topo;
}

void liberar_pilha(Pilha *p){
    Pilha *aux = p->prox;
    while(aux){
        p->prox = p->prox->prox;
        free(aux);
        aux = p->prox;
    }
}

int main(void){
    int T;
    unsigned long long i, n, tmp, aux, aux2;
    unsigned long long cape = 0;
    Pilha *p, no;

    p = malloc(sizeof(Pilha));
    int j = 0;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%llu", &n);
        while(1){
            p->prox = NULL;
            if(cape) n -= cape;
            cape = 0;
            tmp = n--;
            aux2 = 10;
            while(tmp > 0){
                aux = tmp % 10;
                if(aux > aux2){
                    while(p->prox){
                        no = pop(p);
                        cape += (no.n * no.k); //(aux2 * (k / 10))
                    }
                    liberar_pilha(p);
                    break;
                }

                push(p, aux);
                aux2 = aux;
                tmp /= 10;
            }
            if(tmp <= 0){
                printf("Case #%llu: %llu\n", i, ++n);
                break;
            }
        }
    }
    return 0;
}
