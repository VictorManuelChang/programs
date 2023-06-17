#include <stdio.h> 
#define max 100

int main() {
    float vet[max];
    for (int i = 0; i < 100; i++)
    {
        scanf("%f", &vet[i]);
        if (vet[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, vet[i]);
        }
        
        
    }


    

    return 0;
    
    
}