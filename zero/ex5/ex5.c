#include <stdio.h>

#define MAX_PALAVRA 20

void copiar_cebolinha(char original[], char nova[]) {
  int pos_nova = 0;
  for (int i = 0; original[i] != '\0'; i++)
    if (original[i] != 'R')
      nova[pos_nova++] = original[i];
    else if (i == 0 || original[i-1] != 'R' ) /* Não precia do i > 0 após || */
      nova[pos_nova++] = 'L';
  nova[pos_nova] = '\0';
}

int main() {
  char palavra[MAX_PALAVRA];
  char palavra_modificada[MAX_PALAVRA];

  scanf("%s", palavra);
  copiar_cebolinha(palavra, palavra_modificada);
  printf("%s", palavra_modificada);

  return 0;
}