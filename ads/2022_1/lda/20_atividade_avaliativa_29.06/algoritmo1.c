#include <stdio.h>
#include <windows.h>

int main(){
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP (CPAGE_UTF8);

  int numero[10], soma, media;
  int vetor[] = {6,6,6,6,6,6,6,6,6};
  int i;
  soma = 0;

  for(i = 1; i < 10; i++){
    printf("Digite um número\n");
    scanf("%d%*c", &numero[i]);

    soma = (soma + numero[i]);
    media = soma / 10;
  }
  printf("A soma dos 10 numeros: %d\n", soma);
  printf("A media dos 10 numeros: %d\n", media);

  printf("Quais os numeros estão acima da média?\n");
  for(i = 0; i < 10; i++){
    if(numero[i] > media){
      printf("Valor[%d] é maior que a media\n", numero[i]);
    }
  }

  printf("Exibir o vetor?\n");
  for(i = 0; i < 9; i++){
    printf("Valor[%d] posição %d\n", numero[i], i);
  }
}