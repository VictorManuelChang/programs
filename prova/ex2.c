#include <stdio.h>
#define max 100

void troca(int *a, int *b) {

    int aux = *a;
    *a = *b;
    *b = aux;

}

void inserctionSort(int n, int vet[max]) {
    int x, i, j;
    for (i = n-2; i >= 0; i--)
    {
        x = vet[i];
        for (j = i+1; j < n && vet[j] < x; j++){
            vet[j-1] = vet[j];
        }
        vet[j-1] = x;
    
        
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

    inserctionSort(n, vet);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }

    return 0;
    
    
    
}