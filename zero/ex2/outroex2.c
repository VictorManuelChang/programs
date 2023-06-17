#include <stdio.h>
#define max 100

int main() {
    int num, duracao, limite = 0, maxima = 0; 
    int vet[max];
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &duracao);

    if (duracao == 1) {
        limite = 100;
    } else if (duracao == 2)
    {
        limite = 20;
    } else {
        limite = 10;
    }

    for (int i = 0; i < num; i++) {
        if (vet[i] > maxima && vet[i] <= limite)
        {
            maxima = vet[i];
        }
        
    }

    printf("%d\n", maxima);




    return 0;

}