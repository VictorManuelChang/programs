#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0)
    {
        return 0;
    } else {
        return (n % 10) + soma_digitos(n / 10); 
    }
    
}

int main() {
    int n, resul;
    scanf("%d", &n);

   
    resul = soma_digitos(n);

    printf("%d\n", resul);

    return 0;
    

}