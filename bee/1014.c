#include <stdio.h> 

int main() {

    float n2, total;
    int n1;
    scanf("%d %f", &n1, &n2);

    total = n1 / n2;

    printf("%.3f km/l\n", total);

    return 0;
    
}