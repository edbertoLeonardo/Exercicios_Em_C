/*Ler 3 valores (A, B e C) representando as medidas dos lados de um tri�ngulo e escrever 
se formam ou n�o um tri�ngulo. OBS: para formar um tri�ngulo, o valor de cada lado 
deve ser menor que a soma dos outros 2 lados

*/

#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 
  
int main() 
{ 
setlocale(LC_ALL, "portuguese"); 
 
    int ladoA, ladoB, ladoC; 
  
     
    printf("Digite os lados do triangulo: \n"); 
    scanf("%d%d%d", &ladoA, &ladoB, &ladoC); 
     
    if((ladoA + ladoB) > ladoC) 
    { 
        if((ladoB + ladoC) > ladoA) 
        { 
            if((ladoA + ladoC) > ladoB)  
            { 
                printf("� um triangulo"); 
            } 
            else 
            { 
                printf("N�o � um triangulo"); 
            } 
        } 
        else 
        { 
            printf("N�o � um triangulo"); 
        } 
    } 
    else 
    { 
        printf("N�o � um triangulo"); 
    } 
} 
 
