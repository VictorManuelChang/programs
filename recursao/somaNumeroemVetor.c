#include <stdio.h>
#define MAX  100

float soma(int n, float v[MAX]) {

    if (n == 0)
    {
        return 0;
    } else {
        return v[n-1] + soma(n-1, v);
    }
    

}

int main(){
    int n;
    float v[MAX];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &v[i]);
    }

    float total = soma(n, v);

    printf("%.1f\n", total);

    return 0;

    
}