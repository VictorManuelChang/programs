#include <stdio.h>
#define max 100


int remover(int n, int vet[max], int k) {
    if (k >= n)
    {
        return n;
    } else {
        for (int i = k; i < n-1; i++)
        {
            vet[i] = vet[i+1];
        }
        return n-1;
    }
    
}

int main() {

    int n, k;
    int vet[max];
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    int novoN = remover(n, vet, k);

    printf("%d\n", novoN);

    

    return 0;
}