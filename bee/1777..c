#include <stdio.h> 
#define max 100

int main() {
    int n;
    int cont = 0;
    scanf("%d", &n);
    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, cont );
        if (cont < n-1)
        {
            cont++;
        } else {
            cont = 0;

        }
        
    }
    
    

    return 0;
    
    
}