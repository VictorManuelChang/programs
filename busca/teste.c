#include <stdio.h>

#define max 100

void troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void particionar(int p, int r, int vet[max]) {
    
}

int main() {
    int n; 
    int vet[max];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }



    return 0;
    

}