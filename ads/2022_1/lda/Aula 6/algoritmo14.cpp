// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
// a) a idade dessa pessoa em anos; 
// b) a idade dessa pessoa em meses; 
// c) a idade dessa pessoa em dias; 
// d) a idade dessa pessoa em semanas.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int main() 
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float ano_atual, ano_nascimento, idadeanos, idademes, idadedias, idadesemanas;

    printf("Digite o ano de nascimento:\n");
    scanf("%f",&ano_nascimento);

    printf("Digite o ano atual:\n");
    scanf("%f",&ano_atual);

    idadeanos = (ano_atual-ano_nascimento);
    idademes = (idadeanos*12);
    idadedias = (idademes*30);
    idadesemanas = (idadedias/7);

    printf("A idade atual é:\n%.2f\n",idadeanos);
    printf("A idade em meses será de:\n%.2f\n",idademes);
    printf("A idade em dias será de:\n%.2f\n", idadedias);
    printf("A idade em semanas será de:\n%.2f\n", idadesemanas);

  return 0;
}