// Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a media final desses alunos. Calcule e mostre:

//O nome do aluno com maior média(desconsiderar empates);
//Para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto elsse aluno precisa tirar na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

	int matricula[7];
    int iMaior=0;
    int i;
	float media[7], vMaior=0, nMinima;

	// carrega a matricula dos alunos
	for (i = 0; i <= 7; i++){
		printf("Informe a matricula do aluno[%i](*somente números)\n", i);
		scanf("%i", &matricula[i]);
	}

	// carregar as médias
	for (i = 0; i <= 7; i++){
		printf("Informe a média do aluno[%i] de Matricula:%i\n", i, matricula[i]);
		scanf("%f", &media[i]);

		// pega a maior média
		if(media[i] > vMaior){
			vMaior = media[i];
			iMaior = i;
		}
	}

	// Mostra a maior média
	printf("Maior média é %f do aluno[%i] de matricula:%i \n", vMaior, matricula[iMaior], iMaior);

	// Mostra alunos abaixo da média e a nota mínima para aprovação
	for (i = 0; i <= 7; i++){
		if(media[i] < 7){
			// considerei 4 notas + uma final para média 5
			nMinima = (25 - (media[i] * 4));
			if(nMinima < 10){
				printf("O aluno[%i], Matricula:%i reprovado\n", i, matricula[i]);
			} else {
				printf("O aluno[%i], Matricula:%i precisa de %f para ser aprovado\n", i, matricula[i], nMinima);	
			}
		}
	}

	return 0;
}