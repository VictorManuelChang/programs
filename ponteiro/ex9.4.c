#include <stdio.h>

int main(void) {
    int a, b, *pt1, *pt2;
    pt1 = &a; // ponteiro 1 recebe endereço de a
    pt2 = &b; // ponteiro 2 recebe endereço de b
    a = 1;  // valor de a é 1
    (*pt1)++;// variável a aumenta em 1(pois ponteiro aponta pra ela)
    b = a + *pt1; //b recebe 2 + 2 
    *pt2 = *pt1 * *pt2;  //b recebe 2(pt1) multiplicado por 4(pt2)
    printf("a=%d, b=%d, *pt1=%d, *pt2=%d\n", a, b, *pt1, *pt2); //imprime
    return 0;
}
