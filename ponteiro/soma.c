#include <stdio.h>

int transfInt(const char *str) {
    int resultado = 0;
    int sinal = 1;
    int i = 0;

    if (str[0] == '-') {

        sinal = -1;
        i = 1;

    }

    while (str[i] != '\0') {

        resultado = resultado * 10 + (str[i] - '0');
        i++;

    }

    return resultado * sinal;

}

int main(int argc, char *argv[]) {
    int soma = 0;

    
    for (int i = 1; i < argc; i++) {

        int numero = transfInt(argv[i]);

        soma += numero;
    }

    printf("A soma dos argumentos é: %d\n", soma);

    return 0;
}
