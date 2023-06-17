#include <stdio.h>

#define max 20

typedef struct 
{
    char nome[max];
    float nota;
    int presencas;
} aluno;

int main() {
    int n;
    scanf("%d", &n);

    aluno alunos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s%f%d", alunos[i].nome, &alunos[i].nota,
        &alunos[i].presencas);
    }

    int aulas;
    scanf("%d", &aulas);

    for (int i = 0; i < n; i++)
    {
        if (alunos[i].presencas >= aulas / 2.0)
        {
            alunos[i].nota *= 1.1;
        }
        for ( int i = 0; i < n; i++)
        {
            printf("%s (%d): %.1f\n", alunos[i].nome, alunos[i].presencas, alunos[i].nota);

        }
        
    }
    
    return 0;


}