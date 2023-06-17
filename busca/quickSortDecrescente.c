#include <stdio.h>

#define max 100

void troca(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}


void quicksort(int inicio, int fim, int vet[max]) {
    int i, j, pivo;
    i = inicio;
    j = fim-1;
    pivo = vet[(inicio+fim)/2];
    while(i <= j) {
        while(vet[i] > pivo && i < fim) {
            i++;
        }
        while(vet[j] < pivo && j > inicio) {
            j--;
        }
        if(i <= j) {
            troca(&vet[i], &vet[j]);
            i++;
            j--;
        }
    }
    if(j > inicio) {
        quicksort(inicio, j+1, vet);
    }
    if(i < fim) {
        quicksort(i, fim, vet);
    }
}


int main() {

    int n;
    int vet[max];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    
    quicksort(0, n, vet);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }
    

    

    return 0;
}