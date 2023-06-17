#include <stdio.h>

#define MAX 100

void trocar(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

typedef struct {
    int numero;
    int ultrapass;
} capivara;

int main() {
    capivara vet[MAX];
    int n, num;

    printf("Digite o valor de n: "); //Para determinar o número de capivaras
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        vet[i].numero = i+1;      //Preenchendo o numero da capivara de 1 a n
        vet[i].ultrapass = 0; // Exemplo de atribuição de valor a ultrapass
    }
    while (scanf("%d", &num) != EOF) {
        vet[num-1].ultrapass++;
        trocar(&vet[num-1].numero, &vet[num-2].numero); // substituir no vetor a capivara fez ultrapassagem e aquela que foi ultrapassada
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i].numero); // imprimir a posição final das capivaras
    }
    printf("\n");
    return 0;
  
}
