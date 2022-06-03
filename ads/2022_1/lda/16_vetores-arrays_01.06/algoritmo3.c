//Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o segundo ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:

#include <stdio.h>

int main(){

    int TAM=3;
    int tem=1;
    int codProdutos[10];
    int qtdProdutos[10];
    int codCliente;
    int codProd, qtdProd;
    int i;

    for(int i = 0; i <  10; i++){
        printf("Digite o Codigo do produto\n");
        scanf("%d", &codProdutos[i]);

        printf("Digite a Quantidade do produto\n");
        scanf("%d", &qtdProdutos[i]);

        do{
            printf("Digite o Codigo do cliente\n");
            scanf("%d", &codCliente);

            if(codCliente != 0){

                printf("Digite o Codigo do Produto\n");
                scanf("%d", &codProd);
                for(int i = 0; i < TAM; i++){
                    if(codProd == codProdutos[i]){
                        tem=1;
                        printf("Digite a quantidade do Produto");
                        scanf("%d", &qtdProd);
                        if(qtdProd <= qtdProdutos[i]){
                            printf("Pedido Atendido!");
                            qtdProdutos[i] = qtdProdutos[i] - qtdProd;
                        }else{
                            printf("Não temos estoque!");
                        }
                    }
                }
            }
            if(tem != 1){
                printf("Código Inexistente!");
            }
        }while(codCliente != 0);
        printf("estoque atualizado\n");
        for(i = 0; i < TAM; i++){
            printf("Produto COD %d Quantidade: %d\n", codProd, qtdProd);
        }
    }
}  