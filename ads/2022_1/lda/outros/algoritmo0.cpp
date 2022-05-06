#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[3][3]; // declarando variais usadas
	int c, i, j; // declarei o c , i e j == linha  coluna

	printf("\n*****************\n");
	printf("\n***     MATRIZ 3 LINHAS E 3 COLUNAS     **\n");// cabeçalho personalizado
	printf("\n** Exercicio 4 ************\n");


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("\nDigite o elemento da Matriz (%d,%d):", i, j); // pedindo numero e armazenando na matriz
			scanf("%d", &matriz[i][j]);
			while ((c = getchar()) != '\n' && c != EOF); // limpar o buffer do teclado
		}
	}
	printf("\n MATRIZ PRINCIPAL \n\n");
	for (int i = 0; i < 3; i++)

	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", matriz[i][j]); // mostrando matriz principal
		}
		printf("\n");
	}
	printf("\n\n"); // pula 2 linhas
	printf("\n MATRIZ TRANSPOSTA \n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", matriz[j][i]); // fazendo a matriz transposta, li-nha no lugar de coluna
		}
		printf("\n");
	}
	printf("\n\n"); // pula 2 linhas
	printf("\n DIAOGONAL PRINCIPAL \n\n");

	for (int i = 0; i < 3; i++)

	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
				printf("%d\t", matriz[j][i] = matriz[j][i] * 2); // mos-trando matriz principal

		}

	}
	printf("\n\n");
	system("pause");
	return 0;
}