#include <stdio.h>

#define MAX 100

void trocar(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

typedef struct {
    int numero;
    int ultrapass;
} capivara;

int main() {
    capivara vet[MAX];
    int n, num;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        vet[i].numero = i+1;
        vet[i].ultrapass = 0; // Exemplo de atribuição de valor a ultrapass
    }


    while (scanf("%d", &num) != EOF) {
        for (int i = 0; i < n ; i++)
        {
           if (vet[i].numero == num)
           {
                vet[i].ultrapass +=1;
                trocar(&vet[i].numero, &vet[i-1].numero);
                trocar(&vet[i].ultrapass, &vet[i-1].ultrapass);
                
           }
           
        }
        
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i].numero);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i].ultrapass);
    }
    printf("\n");
    
    return 0;
}
