#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {
    int x, y;
}ponto;


/*
    basta alterar a constante abaixo que o vetor tem seu tamanho alterado automaticamente.
    Evidentemente quando não se sabe o tamanho certo, deve-se usar alocação dinâmica
*/    
#define tam 20 

int main(){

    ponto *vet_ponto;
    
    vet_ponto = malloc(tam*sizeof(ponto));
    
    for (int i = 0; i < tam; i++) {
        vet_ponto[i].x = i*2;     
        vet_ponto[i].y = i*3;     
    }
    
    for (int i = 0; i < tam; i++) {
        printf("Vetor na posicao %d\n",i);
        printf("\tValor de X na posição: %d\n",vet_ponto[i].x);     
        printf("\tValor de Y na posição: %d\n",vet_ponto[i].y);     
    }

    return 0;
}
