#include <stdio.h>

void preencherMatrizIdentidade(int *matriz, int dimensao) {
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < dimensao; j++) {
            if (i == j) {
                *(matriz + i * dimensao + j) = 1;  // Preenche com 1 na diagonal principal
            } else {
                *(matriz + i * dimensao + j) = 0;  // Preenche com 0 nos demais elementos
            }
        }
    }
}

void imprimirMatriz(int *matriz, int dimensao) {
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < dimensao; j++) {
            printf("%d ", *(matriz + i * dimensao + j));
        }
        printf("\n");
    }
}

int main() {
    int dimensao;

    printf("Digite a dimensao da matriz identidade: ");
    scanf("%d", &dimensao);

    int matriz[dimensao][dimensao];

    preencherMatrizIdentidade(&matriz[0][0], dimensao);

    printf("Matriz identidade:\n");
    imprimirMatriz(&matriz[0][0], dimensao);

    return 0;
}
