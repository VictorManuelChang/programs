#include <stdio.h>
#include <string.h>
#define max 100



int main() {
    int n, people;
    char lingua[max], aux[max];
    int confere = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &people);
        scanf("%s", lingua);

        for (int i = 0; i < people-1; i++)
        {
            scanf("%s", aux);
            if (strcmp(lingua, aux) == 0)
            {
                confere++;
            }
            
        }
        
        if (confere == people)
        {   
            printf("%s\n", lingua);
        } else {
            printf("ingles\n");
        }
        confere = 1;
        
         
        
    }

    return 0;
    
}