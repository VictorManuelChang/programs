#include <stdio.h>

int main() {
  int n;
  float a1, a2;
  float resultado;
  char op;

  scanf("%d", &n);
  
  for (int i = 0; i < n; i++) {
    scanf("%f %c %f", &a1, &op, &a2);
    switch (op) {
        case '+':
            resultado = a1 + a2;
            break;
        case '-':
            resultado = a1 - a2;
            break;
        case '*':
            resultado = a1 * a2;
            break;
        case '/':
            resultado = a1 / a2;
            break;
        default:
            printf("Erro: operador não reconhecido\n");
            return 1;
        }
        printf("%.1f\n", resultado);
    
    }
  
  return 0;
}
