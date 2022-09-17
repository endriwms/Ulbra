//Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos. 

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i;
    float numeros[10], quadrados[10];

    for(i = 0; i < 10; i++){
        scanf("%f",&numeros[i]);
    }
    for(i = 0; i < 10; i++){
        quadrados[i] = numeros[i] * numeros[i];
    }
    for(i = 0;i < 10; i++){
        printf("%.2f", numeros[i]);
    }

    printf("\n");

    for(i = 0; i < 10; i++){
        printf("%.2f", quadrados[i]);
    }

    return 0;
}
