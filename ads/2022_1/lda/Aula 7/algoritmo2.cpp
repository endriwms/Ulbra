#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float nota1, nota2, nota3, notaExame, media;

    printf("Digite primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n"); 
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("Média aritmética:\n%.2f\n", media);

    if (media>=0 && media < 3) {
        printf("Você foi reprovado\n");
    }

    if (media>=3 && media < 7) {
        printf("Exame\n");
        notaExame = (12 - media);
        printf("Deve tirar nota  %.2f para ser aprovado\n", notaExame);
    }

    if (media>=7 && media <=10) {
        printf("Você foi Aprovado\n");
    }

    return 0;
}