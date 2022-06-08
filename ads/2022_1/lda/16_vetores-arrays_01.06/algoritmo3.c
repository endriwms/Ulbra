//Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o segundo ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:

//Se o código do produto solicitado existe. Se existir, tentar atender ao pedido, caso contrário, exibir mensagem "Código Inexistente";
//Cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível, escrever a mensagem não temos estoque suficiente desta mercadoria. Se puder atendê-lo, escrever a mensagem "Pedido atendido. Obrigado e volte sempre.";
//Efetuar atualização do estoque somente se o pedido for atendido integralmente;
//No final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int codProd[10] = {1,2,3,4,5,6,7,8,9,10};
    int totalEst[10] = {8,3,20,40,33,60,7,8,9,10};
    int codCliente, prod, qtd;
    int i;

    printf("Digite o Código do Cliente:\n");
    scanf("%d", &codCliente);

    if(codCliente == 0){
        printf("Código Inexistente. Tente novamente.\n");;
    }else{
        printf("Digite o Código do produto:\n");
        scanf("%d", &codProd[i]);

        for(i = 0; i < 10; i++){
            if(prod == codProd[i]){
                printf("Tentando atender pedido...\n");
                printf("...\n");
                printf("...\n");
                printf("...\n");
                if(qtd <= totalEst[i]){
                    printf("Pedido atendido. Obrigado e volte sempre.");
                    totalEst[i] -= qtd;

                    printf("Estoque Atualizado!");
                    for(i = 0; i < 10; i++){
                        printf("Produto: %d\n Estoque: %d\n", codProd[i], totalEst[i]);
                    }
                }else{
                    printf("Sem estoque.\n");
                    printf("Produto Indisponível.\n");
                }
            }      
        }
    }
}


    