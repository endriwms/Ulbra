// #include <stdio.h>
// #include <windows.h>

// int main(){
//   UINT CPAGE_UTF8 = 65001;
//   SetConsoleOutputCP (CPAGE_UTF8);

//   int matriz[3][2] = {{5, -3}, {1, -3}, {3, 10}};
//   int sln[3] = {0, 0, 0};
//   int i, j, x;
//   x = 0;

//   for(i = 1; i < 2; i++){
//     for(j = 1; j < 2; j++) {
//       sln[i] = sln[i] + matriz[i][j];
//     }
//     x = x + sln[i];
//   }
//   printf("%d", x);
// }

#include <stdio.h>
#include <windows.h>

int main(){
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP (CPAGE_UTF8);

  int numero;
  int permutacao;

  printf("Digite o n de letras");
  scanf("%d%*c", &numero);

  if (numero > 1) {
    permutacao = (numero - 1) * numero;
  }


  printf("o numero de permutações é %d", numero);
}

Aula A = {João, Gabriel, Stephanie, Daniel, Arthur, Guilherme, Matheus, Renan, Carolina}

Aula B = {Bruno, Guilherme, Carolina, Daniel, Arthur, Marcus, Severino, Oman, Stephanie}

AB = {Stephanie, Daniel, Arthur Guilherme Carolina}