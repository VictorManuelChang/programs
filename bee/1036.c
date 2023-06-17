#include <stdio.h>
#include <math.h>


int main() {
    double quadrado, normal, constante, R1, R2;
    scanf("%lf %lf %lf", &quadrado, &normal, &constante);

    double elevado =  pow(normal, 2);
    double delta = elevado - 4 * quadrado * constante; 
    if (quadrado == 0)
    {
        delta = -1;
    }
    

    if (delta == 0)
    {
        R1 = -normal / 2 * quadrado;
        R2 = R1;
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    } 
    if (delta > 0) {
        double raiz = sqrt(delta);
        R1 = (-normal + raiz) / (2 * quadrado);
        R2 = (-normal - raiz) / (2 * quadrado);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    else {
        printf("Impossivel calcular\n");
    }
    
    
    return 0;
    


}