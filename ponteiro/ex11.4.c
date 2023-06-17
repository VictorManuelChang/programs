#include <stdio.h>
#define max 100

void inverte(char *msg) {
    char *fim;
    fim = msg;
    while (*fim != '\0')
    {
        fim++;
    }
    fim--;

    char *inicio = msg;
    while (inicio < fim)
    {
        char aux = *inicio;
        *inicio = *fim;
        *fim = aux;
        inicio++;
        fim--;

    }
    
    
}

int main() {
    char msg[max];
    int k = 0;
    char c = getchar();

    while (c != '\n' && k < max-1)
    {
        msg[k] = c;
        k++;
        c = getchar();
    }
    msg[k] = '\0';
    inverte(msg);
    printf("%s",  msg);
    
    return 0;
}