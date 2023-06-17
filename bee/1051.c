#include <stdio.h>

int main() {
    double renda, imposto;
    scanf("%lf", &renda);

    if (renda <= 2000)
    {
        printf("Isento\n");
    } else
    {
        if (renda <= 3000)
        {
            imposto = (renda - 2000) * 0.08;
        } if (renda > 3000 && renda <= 4500)
        {
            imposto = 80.00 + (renda - 3000) * 0.18;
        } else
        {
            imposto = 350 + (renda - 4500) * 0.28;
        }
        printf("R$ %.2lf\n", imposto);
        
        
    }
    

   
    

    return  0;
}