#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int caractere;
    int frequencia;
} FrequenciaCaractere;

int comparar_caracteres(const void *a, const void *b) {
    FrequenciaCaractere *f1 = (FrequenciaCaractere *)a;
    FrequenciaCaractere *f2 = (FrequenciaCaractere *)b;
    
    if (f1->frequencia == f2->frequencia) {
        return f2->caractere - f1->caractere;
    }
    
    return f1->frequencia - f2->frequencia;
}

void calcular_frequencias(char *texto) {
    FrequenciaCaractere frequencias[128];
    int tamanho = strlen(texto) - 1; // Subtrair 1 para ignorar o '\n'
    
    for (int i = 0; i < 128; i++) {
        frequencias[i].caractere = i + 32;
        frequencias[i].frequencia = 0;
    }
    
    for (int i = 0; i < tamanho; i++) {
        int ascii = (int)texto[i];
        if (ascii >= 32 && ascii < 127) {
            frequencias[ascii - 32].frequencia++;
        }
    }
    
    qsort(frequencias, 128, sizeof(FrequenciaCaractere), comparar_caracteres);
    
    for (int i = 0; i < 128; i++) {
        if (frequencias[i].frequencia > 0) {
            printf("%d %d\n", frequencias[i].caractere, frequencias[i].frequencia);
        }
    }

    printf("\n");
}

int main() {
    char linha[1000];
    
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        calcular_frequencias(linha);
    }
    
    return 0;
}
