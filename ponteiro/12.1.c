#include <stdio.h>

void preenche(int *matriz, int dim) {
    for (int i = 0; i < dim; i++) {
        
        for (int j = 0; j < dim; j++) {
            
            if (i == j) {
                
                *(matriz + i * dim + j) = 1;
            
            }
            else {
                
                *(matriz + i * dim + j) = 0;

            }
        }
    }
}

int main() {
    int dim;
    scanf("%d", &dim);

    int matriz[dim][dim];

    preenche(&matriz[0][0], dim);

    for (int i = 0; i < dim; i++) {

        for (int j = 0; j < dim; j++) {

            printf("%d ", matriz[i][j]);

        }

        printf("\n");
        
    }
    return 0;
}
