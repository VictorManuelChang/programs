#include <stdio.h>

int main() {
    int duracao, limite, maxima = 0;
    scanf("%d", &duracao);

    if (duracao == 1) {
        limite = 100;
    } else if (duracao == 2) {
        limite = 20;
    } else {
        limite = 10;
    }

    int velocidades[] = {10, 15, 8, 20, 5, 25};
    int n = sizeof(velocidades) / sizeof(velocidades[0]);
    for (int i = 0; i < n; i++) {
        int v = velocidades[i];
        if (v > maxima && v <= limite) {
            maxima = v;
        }
    }

    printf("%d", maxima);
    return 0;
}