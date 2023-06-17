#include <stdio.h>
#define max 100

void troca(int *a, int *b) {

    int aux = *a;
    *a = *b;
    *b = aux;

}

void selectionSort(int n, int vet[max]) {
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (vet[j] < vet[min])
            {
                min = j;
            }
            troca(&vet[i], &vet[min]);
            
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

    selectionSort(n, vet);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }

    return 0;
    
    
    
}