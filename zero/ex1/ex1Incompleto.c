#include <stdio.h>

int main() {
    float n1, n2, resultado;
    char op;

    scanf("%f %c %f", &n1, &op, &n2 );

    if (op == '/') {
        resultado = n1 / n2;
        printf("%.1f", resultado);
    }else {
        printf("Não temos como resolver\n");
    }
    return 0;
}