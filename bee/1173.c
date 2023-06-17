#include <stdio.h> 
#define max 100

int main() {
    int n;
    scanf("%d", &n);
    int vet[max];
    vet[0] = n;
    printf("N[0] = %d\n", n);
    for (int i = 1; i < 10; i++)
    {
        vet[i] = vet[i-1] * 2;
        printf("N[%d] = %d\n", i, vet[i]);

    }


    

    return 0;
    
    
}