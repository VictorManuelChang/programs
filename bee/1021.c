#include <stdio.h>

int main() {

    double n;
    int vet[12];
    double dinheiro[12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    scanf("%lf", &n);
  
    if (n >= 100) {
        vet[0] = n / 100;
        n -= 100 * vet[0];     
    } else {
        vet[0] = 0;
    }
    if (n >= 50)
    {
        vet[1] = 1;
        n -= 50;
    } else {
        vet[1] = 0;
    }
    if (n >= 20) {
        vet[2] = n / 20;
        n -= 20 * vet[2];     
    } else {
        vet[2] = 0;
    }
    if (n >= 10) {
        vet[3] = 1;
        n -= 10;     
    } else {
        vet[3] = 0;
    }
    if (n >= 5) {
        vet[4] = 1;
        n -= 5;     
    } else {
        vet[4] = 0;
    }
    if (n >= 4) {
        vet[5] = n / 2;
        n -= 2 * vet[5];     
    } else {
        vet[5] = 0;
    }
    if (n >= 1) {
        vet[6] = 1;
        n -= 1;     
    } else {
        vet[6] = 0;
    }
    if (n >= 0.5) {
        vet[7] = 1;
        n -= 0.5;     
    } else {
        vet[7] = 0;
    }
    if (n >= 0.25) {
        vet[8] = 1;
        n -= 0.25;     
    } else {
        vet[8] = 0;
    }
    if (n >= 0.1) {
        vet[9] = n / 0.1;
        n -= 0.1 * vet[9];     
    } else {
        vet[9] = 0;
    }
    if (n >= 0.05) {
        vet[10] = 1;
        n -= 0.05;     
    } else {
        vet[10] = 0;
    }
    if (n > 0) {
        vet[11] = n / 0.01;
        n -= 0.01 * vet[11];     
    } else {
        vet[11] = 0;
    }

    printf("NOTAS:\n");    
    for (int i = 0; i < 6; i++)
    {
        printf("%.1d nota(s) de R$ %.2lf\n", vet[i], dinheiro[i]);
    }

    printf("MOEDAS:\n"); 

    for (int i = 6; i < 12; i++)
    {
        printf("%.1d moeda(s) de R$ %.2lf\n", vet[i], dinheiro[i]);
    }
    return 0;



}