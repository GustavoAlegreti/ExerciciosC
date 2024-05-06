
//Criação de dados através de structs.

#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data_compromisso;
    Horario horario_compromisso;
    char texto_compromisso[100]; 
} Compromisso;

int main() {
    Horario hora = {10, 30, 0};
    Data data = {20, 3, 2024};
    Compromisso compromisso = {{20, 3, 2024}, {10, 30, 0}, "Reuniao de trabalho"};

    printf("Horário: %02d:%02d:%02d\n", hora.hora, hora.minutos, hora.segundos);
    printf("Data: %02d/%02d/%d\n", data.dia, data.mes, data.ano);
    printf("Compromisso: %02d/%02d/%d %02d:%02d:%02d - %s\n", compromisso.data_compromisso.dia, compromisso.data_compromisso.mes, compromisso.data_compromisso.ano,
           compromisso.horario_compromisso.hora, compromisso.horario_compromisso.minutos, compromisso.horario_compromisso.segundos,
           compromisso.texto_compromisso);

    return 0;
}