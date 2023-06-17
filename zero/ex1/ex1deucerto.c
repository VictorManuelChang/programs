#include <stdio.h>

int main() {
    int num;
    float n1, n2, resultado;
    char op;

    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        scanf("%f %c %f", &n1, &op, &n2);
        if (op == '+') {
            resultado = n1 + n2;
            printf("%.1f\n", resultado);
        } else if (op == '-')
        {
            resultado = n1 - n2;
            printf("%.1f\n", resultado);
        } else if (op == '*')
        {
            resultado = n1 * n2;
            printf("%.1f\n", resultado);
        } else if (op == '/') {
            resultado = n1 / n2;
            printf("%.1f\n", resultado);
        } else {
            printf("Erro: operador não reconhecido\n");
        }    

    }
    return 0;

}