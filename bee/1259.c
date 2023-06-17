#include <stdio.h>

void troca(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int separa(int p, int r, int vet[]) {
    int x, i, j;

    x = vet[p];
    i = p - 1;
    j = r + 1;
    while (1) {
        do {
            j--;
        } while (vet[j] > x);
        do {
            i++;
        } while (vet[i] < x);
        if (i < j) {
            troca(&vet[i], &vet[j]);
        } else {
            return j;
        }
    }
}

void quickSort(int p, int r, int vet[]) {
    int q;

    if (p < r) {
        q = separa(p, r, vet);
        quickSort(p, q, vet);
        quickSort(q + 1, r, vet);
    }
}

void ordenaVetor(int n, int vet[]) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        while (i < n && vet[i] % 2 == 0) {
            i++;
        }
        while (j >= 0 && vet[j] % 2 == 1) {
            j--;
        }
        if (i < j) {
            troca(&vet[i], &vet[j]);
        }
    }

    quickSort(0, i - 1, vet);
    quickSort(i, n - 1, vet);
    // Inverte a ordem dos números ímpares
    int inicio = i;
    int fim = n - 1;
    while (inicio < fim) {
        troca(&vet[inicio], &vet[fim]);
        inicio++;
        fim--;
    }
}

int main(void) {
    // O valor n é dado em uma linha
    int n;
    scanf("%d", &n);
    // A seguir, são dados os n elementos do vetor
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    ordenaVetor(n, vet);

    for (int i = 0; i < n; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;
}
