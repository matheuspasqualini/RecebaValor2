#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    
    printf("\nDigite 1 valor ");
    scanf("%i", &numero1);
    
    printf("\nDigite o segundo:");
    scanf("%i", &numero2);
    
    if (numero1 > numero2){
        printf ("valor 1(%i) é maior que o valor 2(%i)", numero1, numero2);
    }else{
       printf ("valor 2(%i) é maior que o valor 1(%i)", numero2, numero1); 
    }
