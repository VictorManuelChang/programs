#include <stdio.h>

#define MAX 100

void troca(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

typedef struct {
    int numero;
    int ultrapass;
} capivara;

int separa(capivara vet[MAX], int low, int high) {
    int pivot = vet[high].ultrapass;
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (vet[j].ultrapass > pivot || (vet[j].ultrapass == pivot && vet[j].numero < vet[high].numero)) {
            i++;
            troca(&vet[i].numero, &vet[j].numero);
            troca(&vet[i].ultrapass, &vet[j].ultrapass);
        }
    }

    troca(&vet[i + 1].numero, &vet[high].numero);
    troca(&vet[i + 1].ultrapass, &vet[high].ultrapass);

    return (i + 1);
}

void quicksort(capivara vet[MAX], int low, int high) {
    if (low < high) {
        int pi = separa(vet, low, high);

        quicksort(vet, low, pi - 1);
        quicksort(vet, pi + 1, high);
    }
}

int main() {
    capivara vet[MAX];
    int n, num;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        vet[i].numero = i+1;
        vet[i].ultrapass = 0; 
    }

    while (scanf("%d", &num) != EOF) {
        for (int i = 0; i < n ; i++) {
            if (vet[i].numero == num) {
                vet[i].ultrapass += 1;
                troca(&vet[i].numero, &vet[i-1].numero);
                troca(&vet[i].ultrapass, &vet[i-1].ultrapass);
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
