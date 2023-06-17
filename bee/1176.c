#include <stdio.h> 
#define max 100

int fibo(int vet[max], int i) {
    int long long fib[max];
    fib[0] = 0;
    fib[1] = 1; 
    int resul;
    for (int i = 2; i < vet[i]; i++)
    {
        resul = fib[i-1] + fib[i-2];
        fib[i-2] = fib[i-1];
        fib[i-1] = resul;
    }

    return resul;
    
}

int main() {
    int vet[max];
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
       
        if (vet[i] == 0)
        {
            printf("Fib(0) = 0");
        } if (vet[i] == 1)
        {
            printf("Fib(1) = 1");
        } else {
            int resultado = fibo(vet, i);
            printf("%d\n", resultado);
        }
        
        
    }
    
    

    

    return 0;
    
    
}