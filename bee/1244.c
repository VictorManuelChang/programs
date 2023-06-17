#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenarStringsPorTamanho(char **strings, int numStrings) {
    int i, j;
    char *temp;
    
    for (i = 0; i < numStrings - 1; i++) {
        for (j = 0; j < numStrings - i - 1; j++) {
            // Compara o tamanho das strings
            if (strlen(strings[j]) > strlen(strings[j+1])) {
                // Realiza a troca de posições
                temp = strings[j];
                strings[j] = strings[j+1];
                strings[j+1] = temp;
            }
        }
    }
}

int main() {
    int numStrings, i;
    printf("Digite o número de strings: ");
    scanf("%d", &numStrings);
    
    // Aloca espaço para armazenar as strings
    char **strings = (char **)malloc(numStrings * sizeof(char *));
    
    // Lê as strings do usuário
    for (i = 0; i < numStrings; i++) {
        printf("Digite a string %d: ", i+1);
        char buffer[100];
        scanf("%s", buffer);
        
        // Aloca espaço para a string e copia o conteúdo do buffer
        strings[i] = (char *)malloc(strlen(buffer) + 1);
        strcpy(strings[i], buffer);
    }
    
    // Chama a função de ordenação
    ordenarStringsPorTamanho(strings, numStrings);
    
    // Imprime as strings ordenadas
    printf("Strings ordenadas:\n");
    for (i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }
    
    // Libera a memória alocada
    for (i = 0; i < numStrings; i++) {
        free(strings[i]);
    }
    free(strings);
    
    return 0;
}
