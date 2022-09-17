#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>
#include <time.h>
#include <ctime>
#include <locale.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float t, d, dia, mes, ano, hora, min;

    time_t data_tempo;
    time (&data_tempo);

    struct tm*tempo = localtime (&data_tempo);

    printf("Informe a data atual:\n");
    scanf("%f%f%f", &dia, &mes, &ano);
    printf("Data Atual: %.f/%.f/%.f\n", dia, mes, ano);
    
    
    if (mes == 1) {
    printf("Janeiro.\n");
    } else if (mes ==2) {
       printf("Fevereiro.\n");
    } else if (mes ==3) {
       printf("Março.\n");
    } else if (mes ==4) {
       printf("Abril.\n");
    } else if (mes ==5) {
       printf("maio.\n");
    } else if (mes ==6) {
       printf("Junho.\n");
    } else if (mes ==7) {
       printf("Julho.\n");
    } else if (mes ==8) {
       printf("Agosto.\n");
    } else if (mes ==9) {
       printf("Setembro.\n");
    } else if (mes ==10) {
       printf("Outubro.\n");
    } else if (mes ==11) {
       printf("Novembro.\n");
    } else if (mes ==12) {
       printf("Dezembro.\n");
    }
    else {
       printf("Não é um número válido!");
    }

    hora = tempo -> tm_hour;
    min = tempo -> tm_min;

    printf("Hora atual: %.f:%.f\n", hora, min);

return 0;

}