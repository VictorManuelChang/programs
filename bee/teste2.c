#include <stdio.h>

int fibo(int n, int *cont) {
    (*cont)++; 

    if (n <= 1) {
        return n;
    } else {
        return fibo(n - 1, cont) + fibo(n - 2, cont);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    int cont = -1; 

    int result = fibo(num, &cont);

    printf("fib(5) = %d calls = %d\n", cont, result);
    return 0;
}
