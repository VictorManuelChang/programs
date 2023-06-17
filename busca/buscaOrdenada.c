#include <stdio.h>
#define max 100

int buscaOrdenada(int n, int v[max], int x) {
    int dir, meio, esq;
    dir = n;
    esq = -1;
    while (esq < dir-1)
    {
        meio = (esq + dir) / 2;
        if (v[meio] < x)
        {
            esq = meio;
        } else {
            dir = meio;
        }
    }
    return dir;
    
}

int main() {
    int n, x;
    int v[max];

    scanf("%d%d", &n, &x);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    int resul = buscaOrdenada(n, v, x);

    printf("%d\n", resul);
    

    return 0;




}