#include <stdio.h>

int main() {
    int n1, n2;
    int total = 0;
    
    scanf("%d%d", &n1, &n2);

    if (n1 < n2)
    {

       while (n1 <= n2)
    {
       if (n1 % 13 != 0) {
        total += n1;     
       }       
       n1 += 1;
    }
    } else {
        while (n2 <= n1)
    {
       if (n2 % 13 != 0) {
        total += n2;     
       }       
       n2 += 1;
    }
    }
    
    

    printf("%d\n", total);

    return 0;
    
    
}