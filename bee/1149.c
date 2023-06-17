#include <stdio.h>

int main() {
    int n1, n2, total;
    total = 0;

    scanf("%d%d", &n1, &n2);

    while (n2 <= 0)
    {
        scanf("%d", &n2);
    }
    
    for (int i = 0; i < n2; i++)
    {
        total += n1 + i;
    }
    
    printf("%d\n", total);

    return 0;
}