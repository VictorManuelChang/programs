#include <stdio.h>

int fat(int n) {
    if (n <= 1) 
        return 1;
    else 
        return n * fat(n-1);
}


int main() {
    int n;

    scanf("%d", &n);

    int resul = fat(n);

    printf("%d", resul);
    
}