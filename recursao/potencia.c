#include <stdio.h>

int pot(int x, int n) {
    if (n == 0)
    {
        return 1;
    } else {
        return x * pot(x, n-1);
    }
    
}

int main() {
    int x, n;

    scanf("%d%d", &x, &n);

    int resul = pot(x, n);

    printf("%d\n", resul);

    return 0;

}