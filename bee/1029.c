#include <stdio.h>

int fibonacci(int num, int *calls) {
    (*calls)++;

    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return fibonacci(num - 2, calls) + fibonacci(num - 1, calls);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);

        int calls = 0; 

        int result = fibonacci(k, &calls);
        printf("fib(%d) = %d calls = %d\n", k, calls - 1, result);
    }

    return 0;
}
