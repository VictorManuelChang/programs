#include <stdio.h>

#define max 3


int main() {
    float vet[max];
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &vet[i]);
    }

    float media = (vet[0] *2 + vet[1] *3 + vet[2] *5) / 10;

    printf("MEDIA = %.1f\n", media);


    return 0;
    
}