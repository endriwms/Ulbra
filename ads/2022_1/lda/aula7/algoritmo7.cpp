#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float A, B, C, I;

    printf("Digite um valor para A:\n");
    scanf("%f", &A);
     printf("Digite um valor para B:\n");
    scanf("%f", &B);
     printf("Digite um valor para C:\n");
    scanf("%f", &C);
     printf("Digite um valor para I (1, 2 ou 3):\n");
    scanf("%f", &I);


    //OPÇÃO 1
    if (I==1) 
     if (A < B && A < C){
        printf("A ordem crescente dos números é: %.f %.f %.f\n", A, B, C);
    } else{
        printf("A ordem crescente dos números é: %.f %.f %.f\n", A, C, B);
    }
     if (B<A && B<C) 
        if (B>C) {
            printf("A ordem crescente dos números é: %.f %.f %.f\n", B, A, C);
        }else{
             printf("A ordem crescente dos números é: %.f %.f %.f\n", B, C, A);
        } 
        if (C<A && C<B) 
        if (A<B) {
             printf("A ordem crescente dos números é: %.f %.f %.f\n", C, A, B);
        }else{
            printf("A ordem crescente dos números é: %.f %.f %.f\n", C, B, A);
        }
        

     //OPÇÃO 2
         if (I==2) 
         if (A>B && A>C)
         if (B>C) {
            printf("A ordem decrescente dos números é: %.f %.f %.f\n", A, B, C);
        }else{
            printf("A ordem decrescente dos números é: %.f %.f %.f\n", A, C, B);
        }

        if (B>A && B>C)
        if (A>C) {
            printf("A ordem decrescente dos números é: %.f %.f %.f\n", B, A, C);
        }else{
             printf("A ordem decrescente dos números é: %.f %.f %.f\n", B, C, A);
        }

        if (C>A && C>B)
        if (A>B) {
             printf("A ordem decrescente dos números é: %.f %.f %.f\n", C, A, B);
        }else{
             printf("A ordem decrescente dos números é: %.f %.f %.f\n", C, B, A);
        }

       //OPÇÃO 3
        if (I==3) 
        if (A>B && A>C) {
            printf("A ordem desejada é: %.f %.f %.f\n", B, A, C);
        }
        if (B>A && B>C) {
            printf("A ordem desejada é: %.f %.f %.f\n", A, B, C);
        }
        if (C>A && C>B) {
            printf("A ordem desejada é: %.f %.f %.f\n", A, C, B);
        }        
    
    
     return 0;
}