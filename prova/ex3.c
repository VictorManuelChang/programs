#include <stdio.h>

#define MAX 100

void troca(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void insertionSort(int n, int v[], int tipo) {
    for (int i = 1; i < n; i++) {
        int x = v[i];
        int j = i - 1;
        while (j >= 0 && tipo * v[j] > tipo * x) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = x;
    }
}

void ordenaVetor(int n, int v[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 1) {
            troca(&v[i], &v[k]);
            k++;
        }
    }
    insertionSort(k, v, 1);
    insertionSort(n - k, &v[k], -1);
}

int main() {
    int n;
    int v[MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    ordenaVetor(n, v);
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}
