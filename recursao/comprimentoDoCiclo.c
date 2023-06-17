#include <stdio.h>

int comprimentoCiclo(int n) {   

    if (n == 1)
    {
        return 1;
    } else {
        if (n % 2 == 0)
        {
            return 1 + comprimentoCiclo(n / 2);
        } else{
            return 1 + comprimentoCiclo(n * 3 + 1);
        }
        
    }
    
}

int main() {
    
    int n;
    scanf("%d", &n);

    int resul = comprimentoCiclo(n);

    printf("%d", resul);

}