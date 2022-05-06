// Escrever um programa que lê as 3 notas obtidas por ele em provas. Para cada aluno, calcular a média de aproveitamento, usando a fórmula:

//	     MA = (Nl + N2 + N3) / 3

// A atribuição de conceitos obedece à tabela abaixo:
// Média de Aproveitamento
// Conceito
// >= 9.0 A
// >= 7.5 e < 9.0 B
// >= 6.0 e < 7.5 C
// >= 4.0 e < 6.0 D
// < 4.0 E

// O programa deve escrever as notas, a média de aproveitamento, o conceito correspondente e a mensagem: "APROVADO" se o conceito for A, B, ou C e "REPROVADO" se conceito for D ou E.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    
    float nota1, nota2, nota3, MA;

    printf("Digite primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n"); 
    scanf("%f", &nota3);

    MA = (nota1 + nota2 + nota3)/3;

    if (MA>=9) {
        printf("Nota 1:%.f\n", nota1);
        printf("Nota 2:%.f\n", nota2);
        printf("Nota 3:%.f\n", nota3);
        printf("A média de aproveitamento é:%.f\n", MA);
        printf("Conceito:\nA\n");
        printf("Você foi Aprovado\n");
    }

    if (MA>=7.5 && MA < 9) {
        printf("Nota 1:%.f\n", nota1);
        printf("Nota 2:%.f\n", nota2);
        printf("Nota 3:%.f\n", nota3);
        printf("A média de aproveitamento é:%.f\n", MA);
        printf("Conceito:\nB\n");
        printf("Você foi aprovado");
    }

    if (MA>=6 && MA < 7.5) {
        printf("Nota 1:%.f\n", nota1);
        printf("Nota 2:%.f\n", nota2);
        printf("Nota 3:%.f\n", nota3);
        printf("A média de aproveitamento é:%.f\n", MA);
        printf("Conceito:\nC\n");
        printf("Você foi Aprovado\n");
    }

    if (MA>=4 && MA < 6) {
        printf("Nota 1:%.f\n", nota1);
        printf("Nota 2:%.f\n", nota2);
        printf("Nota 3:%.f\n", nota3);
        printf("A média de aproveitamento é:%.f\n", MA);
        printf("Conceito:\nD\n");
        printf("Você foi reprovado\n");
    }

    if (MA<4) {
        printf("Nota 1:%.f\n", nota1);
        printf("Nota 2:%.f\n", nota2);
        printf("Nota 3:%.f\n", nota3);
        printf("A média de aproveitamento é:%.f\n", MA);
        printf("Conceito:\nE\n");
        printf("Você foi reprovado\n");
    }

    return 0;
}