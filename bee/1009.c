#include <stdio.h>
#define max 100

int main() {
    char nome[max];
    double salario, vendas, total;

    scanf("%s %lf %lf", nome, &salario, &vendas);

    total = salario + vendas * 0.15;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;

}