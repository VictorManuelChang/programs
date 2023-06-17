#include <stdio.h>
#define max 100

int main() {
    int num, n, rato, sapo, total;
    char letra;
    int coelho = 0;
    rato = sapo = coelho;

    scanf("%d", &num);
    
    for (int i = 0; i < num; i++)
    {
        scanf("%d %c", &n, &letra);
        if (letra == 'C')
        {
            coelho += n;
        } if (letra == 'S')
        {
            sapo += n;
        } if (letra == 'R')
        {
            rato += n;
        }
        
        
        
    }
    total = coelho + rato + sapo;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", coelho /(float)total * 100);
    printf("Percentual de ratos: %.2f %%\n", rato /(float)total * 100);
    printf("Percentual de sapos: %.2f %%\n", sapo /(float)total * 100);
    
    
    
    
    return 0;
}