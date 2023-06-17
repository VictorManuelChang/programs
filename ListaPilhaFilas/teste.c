#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da célula da lista
typedef struct Celula {
    int chave;
    struct Celula* prox;
} celula;

// Função recursiva para buscar um elemento na lista
celula* buscaR_C(int x, celula* lst) {
    if (lst->prox == NULL) {
        return NULL;
    }
    if (lst->prox->chave == x) {
        return lst->prox;
    }
    
    return buscaR_C(x, lst->prox);
}

// Função para inserir um elemento no início da lista
void insereInicio(int x, celula** lst) {
    celula* novaCelula = (celula*)malloc(sizeof(celula));
    novaCelula->chave = x;
    novaCelula->prox = *lst;
    *lst = novaCelula;
}

// Função para imprimir a lista
void imprimeLista(celula* lst) {
    celula* aux = lst;
    while (aux != NULL) {
        printf("%d ", aux->chave);
        aux = aux->prox;
    }
    printf("\n");
}

int main() {
    celula* lista = NULL;
    
    // Inserção de elementos na lista
    insereInicio(9, &lista);
    insereInicio(4, &lista);
    insereInicio(7, &lista);
    insereInicio(2, &lista);
    insereInicio(5, &lista);
    
    printf("Lista: ");
    imprimeLista(lista);

    int chave = 7;
    celula* resultado = buscaR_C(chave, lista);
    if (resultado != NULL) {
        printf("Elemento %d encontrado na lista.\n", chave);
    } else {
        printf("Elemento %d não encontrado na lista.\n", chave);
    }
    
    return 0;
}
