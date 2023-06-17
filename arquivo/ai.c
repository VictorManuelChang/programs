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

int partition(capivara vet[], int p, int r) {
    int pivo = vet[r].ultrapass;
    int i = (p - 1);

    for (int j = p; j <= r - 1; j++) {
        if (vet[j].ultrapass > pivo) {
            i++;
            trocar(&vet[i].numero, &vet[j].numero);
            trocar(&vet[i].ultrapass, &vet[j].ultrapass);
        }
    }

    trocar(&vet[i + 1].numero, &vet[r].numero);
    trocar(&vet[i + 1].ultrapass, &vet[r].ultrapass);

    return (i + 1);
}

void quicksort(capivara vet[], int p, int r) {
    if (p < r) {
        int q = partition(vet, p, r);

        quicksort(vet, p, q - 1);
        quicksort(vet, q + 1, r);
    }
}

int main() {
    capivara vet[MAX];
    int n, num;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        vet[i].numero = i+1;
        vet[i].ultrapass = 0; // Exemplo de atribuição de valor a ultrapass
    }

    while (scanf("%d", &num) != EOF) {
        for (int i = 0; i < n ; i++) {
            if (vet[i].numero == num) {
                vet[i].ultrapass += 1;
                trocar(&vet[i].numero, &vet[i-1].numero);
                trocar(&vet[i].ultrapass, &vet[i-1].ultrapass);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i].numero);
    }
    printf("\n");
    

    quicksort(vet, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i].numero);
    }
    printf("\n");

    return 0;
}
