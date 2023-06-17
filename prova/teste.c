#include <stdio.h>
#define max 100

void troca(int *a, int *b) {

    int aux = *a;
    *a = *b;
    *b = aux;

}

int separa(int p, int r, int vet[max]) {
    int x, i, j;

    x = vet[p];
    i = p-1;
    j = r+1;
    while (i < j)
    {
        do
        {
            j--;
        } while (vet[j] % 2 == 0);
        do
        {
            i++;
        } while (vet[i] % 2 == 1);
        if (i < j)
        {
            troca(&vet[i], &vet[j]);
        }
    }
    return j;
}

void quickSort(int p, int r, int vet[max]) {
    int q;

    if (p < r)
    {
        q = separa(p, r, vet);
        quickSort(p, q, vet);
        quickSort(q+1, r, vet);
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

    quickSort(0, n-1, vet);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }

    return 0;
    
    
    
}