#include <stdio.h>
#include <string.h>

#define MAX_PALAVRA 20

int comprimento_str(char string[]) {
    int comprimento = 0;
    while (string[comprimento] != '\0') {
        comprimento += 1;
    }
    return comprimento;
}

void copiar_cebolinha(char original[], char nova[]) {
  int i = comprimento_str(original);
  int old = 0;
  int new = 0;
  
  while (old != i)
  {
    if (original[old] == 'R')
    {
        if (original[old+1] == 'R')
        {
            nova[new] = 'L';
            old += 2;
            new += 1;
        }
        else {
            nova[new] = 'L';
            old ++;
            new ++;
        }      
    } else {
        nova[new] = original[old];
        old++;
        new++;
    }   
  }
  nova[new] = '\0';   
}


int main() {
  char palavra[MAX_PALAVRA];
  char palavra_modificada[MAX_PALAVRA];

  scanf("%s", palavra);
  copiar_cebolinha(palavra, palavra_modificada);
  printf("%s", palavra_modificada);

  return 0;
}