#include <stdio.h> 
#define max 100

int main() {
    int vet[max];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] > 0)
        {
            printf("X[%d] = %d\n", i, vet[i]);
        } else {
            printf("X[%d] = 1\n", i);
        }
        
    }


    

    return 0;
    
    
}