#include <stdio.h>

#define max 100

int *maximo(int n, int v[max]){
    int *maior;
    maior = &v[0]; // ponteiro aponta para o endereço do primeiro número do vetor

    for (int i = 1; i < n; i++)
    {
        if (*maior < v[i])
        {
            *maior = v[i];
        }
    }
    
    return maior; //Retorna o endereço do maior
}

int main(){
    int n;
    int vet[max];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    int *resul = maximo(n, vet);
    printf("%d\n", *resul);

    
    return 0;
}
