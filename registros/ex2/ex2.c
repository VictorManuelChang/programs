#include <stdio.h>
#include <stdlib.h>

struct Horario {
    int horas;
    int minutos;
    int segundos;
};

int main() {
    // lê os dois horários fornecidos
    struct Horario horario1, horario2;
    printf("Digite o primeiro horario (hh:mm:ss): ");
    scanf("%d:%d:%d", &horario1.horas, &horario1.minutos, &horario1.segundos);
    printf("Digite o segundo horario (hh:mm:ss): ");
    scanf("%d:%d:%d", &horario2.horas, &horario2.minutos, &horario2.segundos);

    // calcula a diferença entre os dois horários
    int diferenca = abs((horario2.horas - horario1.horas) * 3600 + 
                        (horario2.minutos - horario1.minutos) * 60 + 
                        (horario2.segundos - horario1.segundos));

    // converte a diferença em horas, minutos e segundos
    int horas = diferenca / 3600;
    int minutos = (diferenca % 3600) / 60;
    int segundos = diferenca % 60;

    // exibe o resultado
    printf("Tempo decorrido: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
