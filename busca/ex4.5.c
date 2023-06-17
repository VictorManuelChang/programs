#include <stdio.h>
#define max 100


int insere(int n, int vet[max], int k, int y) {
    if (k >= n)
    {
        return n;
    } else {
        vet[k] = y;
        for (int i = k; i < n; i++)
        {
           vet[i+1] = vet[i];
        }
        return n+1;
    }
    
}

int main() {

    int n, k, y;
    int vet[max];
    scanf("%d%d%d", &n, &k, &y);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    int novoN = insere(n, vet, k, y);

    printf("%d\n", novoN);

    

    return 0;
}