#include <stdio.h>

int main() {
    float lista[6];
    float total;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &lista[i]);
        
    }

    total = lista[1] * lista[2] + lista[4] * lista[5];

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
    
}