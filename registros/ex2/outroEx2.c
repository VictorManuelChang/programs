#include <stdio.h>

typedef struct 
{
    int hora;
    int min;
    int seg;
} horario;


int main() {

    horario horario1, horario2, horariototal;
    printf("Informe um horário(hh:mm:ss):\n");
    scanf("%d:%d:%d", &horario1.hora, &horario1.min, &horario1.seg);
    printf("Informe o segundo horário(hh:mm:ss):\n");
    scanf("%d:%d:%d", &horario2.hora, &horario2.min, &horario2.seg);

    if (horario2.seg >= horario1.seg)
    {
        horariototal.seg = horario2.seg - horario1.seg;
    } if (horario2.seg < horario1.seg && horario2.min == 00)
    {
        horario2.seg += 60;
        horario2.min += 60;
        horario2.hora -= 1;
        horariototal.seg = horario2.seg - horario1.seg;
    } else {
        horario2.seg += 60;
        horario2.min -=1;
        horariototal.seg = horario2.seg - horario1.seg;
    }
    if (horario2.min >= horario1.min)
    {
        horariototal.min = horario2.min - horario1.min;
    } else {
        horario2.min += 60;
        horario2.hora -=1;
        horariototal.min = horario2.min - horario1.min;
    }

    horariototal.hora = horario2.hora - horario1.hora;



    printf("%d:%d:%d", horariototal.hora, horariototal.min, horariototal.seg);
    


    


    return 0;

}