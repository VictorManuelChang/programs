#include <stdio.h>
#define max 100

void intercala(int p, int q, int r, int vet[max]){
    int i, j, k, w[max];

    i = p; j = q; k = 0;
    while (i < q && j < r)
    {
        if (vet[i] >= vet[j])
        {
            w[k] = vet[i]; i++;
        } else {
            w[k] = vet[j]; j++;
        }
          k++;     
    } 
    while (i < q)
    {
        w[k] = vet[i]; i++; k++;
    } 
    while (j < r)
    {
        w[k] = vet[j]; j++; k++;
    }
    for ( i = p; i < r; i++)
    {
        vet[i] = w[i-p];
    }
}

void mergeSort(int p, int r, int vet[max]) {
    int q; 

    if (p < r-1) {
        q = (p + r) / 2;
        mergeSort(q, r, vet);
        mergeSort(p, q, vet);
        intercala(p, q , r, vet);
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

    mergeSort(0, n, vet);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }

    return 0;
}
