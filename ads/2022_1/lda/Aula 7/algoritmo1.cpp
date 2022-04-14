#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float notaTrab, avalSem, exame, media;

    printf("Digite a nota do Trabalho:\n");
    scanf("%f", &notaTrab);

    printf("Digite a nota da avalição semestral:\n");
    scanf("%f", &avalSem);

    printf("Digite a nota do exame final:\n");
    scanf("%f", &exame);

    media = (notaTrab *2 + avalSem *3 + exame *5)/10;

    printf("Media ponderada:\n%.2f\n", media);

    if (media>=8 && media <=10) {
        printf("Obteve conceito A\n");
    }

    if (media>=7 && media < 8) {
        printf("Obteve conceito B\n");
    }

    if (media>=6 && media < 7) {
        printf("Obteve conceito C\n");
    }

    if (media>=5 && media < 6) {
        printf("Obteve conceito D\n");
    }

    if (media>=0 && media < 5) {
        printf("Obteve conceito E\n");
    }

    return 0;
}