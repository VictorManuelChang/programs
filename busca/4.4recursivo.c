
#include <stdio.h>
#define max 100


int remove_R(int n, int v[max], int k) {
    if (k >= n) {
        return n;
    }
    else {
        v[k] = v[k+1];
        return remove_R(n-1, v, k);
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

    int novoN = remove_R(n, vet, k);

    printf("%d", novoN);

    

    return 0;
}