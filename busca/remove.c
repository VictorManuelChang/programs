#include <stdio.h>
#define max 100

int busca(int n, int vet[max], int x) {
    int k;
    for (k = n-1; k >= 0 && vet[k] != x; k--);
    return k;
    
}

void remover(int n, int vet[max], int k) {
    for (int i = k; i < n-1; i++)
    {
        vet[i] = vet[i+1];
    }
    
}


int main() {

    int n, x;
    int vet[max];
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    int k = busca(n, vet, x);

    remover(n, vet, k);

    for (int i = 0; i < n-1; i++)
    {
        printf("%d\n", vet[i]);
    }
    

    

    return 0;
    
}


