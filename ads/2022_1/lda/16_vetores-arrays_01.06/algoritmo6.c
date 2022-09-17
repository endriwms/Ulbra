//Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor. Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor. Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na loja. Calcule e mostre:

//um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
// o total das vendas de todos os vendedores:
//o maior valor a receber e o nome de quem o recebe;
//o menor valor a receber e o nome de quem o receberá.

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float menor, maior=0, comissao[3], total=0, total_vendas[3];
    int i, maior_v_r, menor_v_r;
    char vend[3][30];

    for(i = 0; i < 3; i++){
        printf("Digite o nome do %d%c vendedor: ", i + 1, 167);
        fflush(stdin);
        scanf("%s", vend[i]);

        printf("Digite o valor da venda: R$ ");
        scanf("%f", &total_vendas[i]);

        printf("Digite o valor da comissao: R$ \t");
        scanf("%f", &comissao[i]);

        printf("\n\n");

        total += total_vendas[i];
    }

    menor = total_vendas[0];
    for(i = 0; i < 3; i++){
        if(comissao[i] > maior){
            maior = comissao[i];
            maior_v_r = i;
        }
        else{
            if (comissao[i] < menor){
                menor = comissao[i];
                menor_v_r = i;
            }
        }

        printf ("\n\nEXTRATO:\n\n");
        for(i = 0; i < 3; i++){
            printf("vendedor %5s com comissão de %.2fR$\n", vend[i], comissao[i]);
        }
        printf("\nA soma total das vendas é de %.2fR$\n", total);
        printf("A maior comissão de %.2fR$ é do vendedor %s\n", maior,vend[maior_v_r] );
        printf("A menor comissão de %.2fR$ é do vendedor %s\n", menor,vend[menor_v_r] );
    }
}