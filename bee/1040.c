#include <stdio.h>

#define max 10


int main() {
    float vet[max];
    for (int i = 0; i < 4; i++)
    {
        scanf("%f", &vet[i]);
    }

    float media = (vet[0] *2 + vet[1] *3 + vet[2] *4 + vet[3]) / 10;

    float mediaNova;

    printf("Media: %.1f\n", media);

    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    } if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    } if (media >= 5.0 && media < 7.0) {
        printf("Aluno em exame.\n");
        scanf("%f", &vet[4]);

        printf("Nota do exame: %.1f\n", vet[4]);



        mediaNova = ((media + vet[4]) / 2);

        if (mediaNova >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }  else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediaNova);
        
        
    }
    


    return 0;
    
}