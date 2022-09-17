//Faça um programa que preencha um vetor com 7 números inteiros, calculo e mostre:

// Os números multiplos de 2;
// Os números multiplos de 3;
// Os números multiplos de 2 e de 3;

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i, j, k, num[7], cont, m2[7], m3[7], m2e3[7];
    i=0;
    j=0;
    k=0;

    printf("\n Digite os números:\n");
    for(cont = 0; cont < 7; cont++){
        scanf("%d", &num[cont]); 
    }

    for(cont = 0; cont < 7; cont++){
       if(num[cont] % 2 == 0){
            m2[i] = num[cont];
            i++;
        }

        if(num[cont] % 3 == 0){
            m3[j] = num[cont];
            j++;
        }

        if(num[cont] % 2 == 0 && num[cont] % 3 == 0 ){
            m2e3[k] = num[cont];
            k++;
        }    
    }

    printf("Multiplo de 2:\n");
    for(cont = 0;cont < i; cont++){
        printf("%d\n", m2[cont]);
    }

    printf("Multiplo de 3:\n");
    for(cont = 0; cont < j; cont++){
        printf("%d\n", m3[cont]);
    }

    printf("Multiplo de 2 e 3:\n");
    for(cont = 0; cont < k; cont++){
        printf("%d\n", m2e3[cont]);
    }

    return 0;

}