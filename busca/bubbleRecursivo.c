#include <stdio.h>
#define max 100

void troca(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void bubbleRecursivo(int n, int vet[max]) {
    if (n == 1) {
        return;
    } 
    for (int i = 0; i < n-1; i++)
    {
        if (vet[i] > vet[i+1])
        {
            troca(&vet[i], &vet[i+1]);
        }
        
    }
    bubbleRecursivo(n-1, vet);
    
}

int main() {

    int n;
    int vet[max];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    bubbleRecursivo(n, vet);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }
    

    

    return 0;
}