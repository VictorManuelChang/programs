#include <stdio.h>
#define max 10000

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
        } while (vet[j] > x);
        do
        {
            i++;
        } while (vet[i] < x);
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
    
    while (scanf("%d", &n) != EOF)
    {
        int vet[max];
        
        int k;

        for (k = 0; k < n; k++)
        {
            scanf("%d", &vet[k]);
        }

        quickSort(0, n-1, vet);

        int i;

        for (i = 0; i < n ; i++)
        {
            printf("%04d\n", vet[i]);
        }
        
        
    }
    
    return 0;
}