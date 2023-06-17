#include <stdio.h> 
#define max 100

int main() {
    int vet[max];
    int k = 19;
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, vet[k]);
        k--;
    }
    
    

    

    return 0;
    
    
}