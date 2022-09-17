#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, n3;

    printf("digite o primeiro número\n");
    scanf("%f", &n1);

    printf("digite o segundo número\n");
    scanf("%f", &n2);
    
    printf("digite o terceiro número\n");
    scanf("%f", &n3);


   if (n1 < n2 && n1 < n3) 
   if (n2 < n3) {
        printf("ordem Cescente: %.f %.f %.f\n", n1, n2, n3); 
        }else{
        printf("Ordem Crescente: %.f %.f %.f\n", n1, n3, n2);
        }

    if (n2 < n1 && n2 < n3) 
    if (n1 < n3) {
        printf("Ordem Crescente: %.f %.f %.f\n", n2, n1, n3);
        }else{
        printf("Ordem Crescente: %.f %.f %.f\n", n2, n3, n1);
        }

    if (n3 < n1 && n3 < n2) 
    if (n1 < n2) {
       printf("Ordem Crescente: %.f %.f %.f\n", n3,n1,n2);
         }else{
       printf("Ordem Crescente: %.f %.f %.f\n", n3, n2, n1);
        }
        
    
     return 0;
   
}