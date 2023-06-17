#include <stdio.h>
#define max 100

void troca(int *a, int *b) {

    int aux = *a;
    *a = *b;
    *b = aux;

}

void bubbleSort(int n, int vet[max]) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (vet[j] > vet[i])
            {
                troca(&vet[j], &vet[i]);
            }
            
        }
        
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

    bubbleSort(n, vet);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }

    return 0;
    
    
    
}