/*****************************************************
 * 
 * Victor Manuel Chang
 * Trabalho 1
 * Professor(a): Diego Padilha Rubert
 * 
 */



#include <stdio.h>

#define MAX 100

// Função para troca a posição de um vetor com outro
void troca(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

/*Definimos um struct "capivara" para representar o número dela e a 
quantidade de ultrapassagens*/ 
typedef struct {
    int numero; //posição de largada
    int ultrapass; //quantas ultrapassagens feitas
} capivara;


/*função para particionar um vetor em duas partes, 
a partir de um pivô*/
int separa(capivara vet[MAX], int p, int r) {
    int pivo = vet[r].ultrapass; //Nosso pivô
    int i = p - 1; // Variável i para acompanhar a posiçõa correta do nosso vetor

    for (int j = p; j <= r - 1; j++) {
        // A gente vai ver onde que vai ser a troca de posição das capivaras
        if (vet[j].ultrapass > pivo || (vet[j].ultrapass == pivo && vet[j].numero < vet[r].numero)) {
            i++;
            //Faz a troca
            troca(&vet[i].numero, &vet[j].numero);
            troca(&vet[i].ultrapass, &vet[j].ultrapass);
        }
    }
    /*Agora, colocamos o pivô na posição correta
    trocando o pivô com a posição seguinte(i+1)*/
    troca(&vet[i + 1].numero, &vet[r].numero);
    troca(&vet[i + 1].ultrapass, &vet[r].ultrapass);

    return (i + 1);
}

//Usamos uma função recursiva para ordenar o vetor[p...q]
void quicksort(capivara vet[MAX], int p, int r) {
    if (p < r) {
        int q = separa(vet, p, r); // Chamamos o nosso pivô

        // Fazemos recursivamente para os subvetores
        quicksort(vet, p, q -1);
        quicksort(vet, q + 1, r);
    }
}

int main() {
    capivara vet[MAX];
    int n, num;

    //Leitura da quantidade de capivaras
    scanf("%d", &n);

    /*Preenchemos os vetores primeiro para 
    posteriormente fazer a troca ou a contagem*/
    for (int i = 0; i < n; i++) {
        vet[i].numero = i+1;
        vet[i].ultrapass = 0; 
    }

    /*Depois lemos as ultrapassagens até encontrar o arquivo EOF, 
    além de já fazer a troca de posições dos vetores*/
    while (scanf("%d", &num) != EOF) {
        for (int i = 0; i < n ; i++) {
            if (vet[i].numero == num) {
                vet[i].ultrapass += 1;
                troca(&vet[i].numero, &vet[i-1].numero);
                troca(&vet[i].ultrapass, &vet[i-1].ultrapass);
            }
        }
    }

    // Printamos a ordem de chegadas das capivaras
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i].numero);
    }
    printf("\n");
    
    // Chamamos a função quickSort para ordenação
    quicksort(vet, 0, n - 1);

    //Printamos a ordem de classificação das capivaras
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i].numero);
    }
    printf("\n");

    

    return 0;
}
