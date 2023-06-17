#include <stdio.h>

int conta_dig_imp(int n ) {
    if (n == 0 )
    {
        return 0;
    } else {
        int dig = n % 10;
        if (dig < 0)
        {
            dig = -dig;
        }
        
        if ((dig) % 2 == 1)
        {
            return 1 + conta_dig_imp(n / 10);
        } else{
            return conta_dig_imp(n / 10);
        }
        
    }
    
}

int main() {

    printf("%d", conta_dig_imp(-213));

    return 0;
}