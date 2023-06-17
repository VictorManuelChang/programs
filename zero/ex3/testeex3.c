#include <stdio.h>
#define max 100

float procuraMaior(float v[], int n) {
    float maior = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

int main() {
    int num, fim = 0, comeco = 0, cont = 0;
    scanf("%d", &num);
    float notasP[max];
    float notasT[max];
    float mediaP[max];
    float mediaT[max];
    float maiorTantes = -1;
    float maiorP = -1;
    
    for (int i = 0; i < 3 * num; i++) {
        scanf("%f", &notasP[i]);
        }
    for (int i = 0; i < 2*num; i++) {
        scanf("%f", &notasT[i]);
        }
    while (fim != num * 3)
    {
        fim += 3;    
        mediaP[cont] = (notasP[fim-1] + notasP[fim-2] + notasP[fim-3]) / 3;    
        cont++;
        comeco += 3;
    }
    fim = comeco = cont = 0;
    while (fim != num * 2)
    {
        fim += 2;
        mediaT[cont] = (notasT[fim-1] + notasT[fim-2]) / 2;
        cont++;
        comeco += 2;
    }
   
    maiorTantes = procuraMaior(mediaT, num);
    
    for (int i = 0; i < num; i++)
    {
        mediaP[i] = mediaP[i] * 1.1;
        printf("%.1f\n", mediaP[i]);
    }

    maiorP = procuraMaior(mediaP, num);
    printf("%.1f\n", maiorP);

    for (int i = 0; i < num; i++) {
        mediaT[i] = mediaT[i] * (10/maiorTantes);
        printf("%.1f\n", mediaT[i]);
    }
    
    
    return 0;
}