/*Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever 
se formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado 
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
                printf("É um triangulo"); 
            } 
            else 
            { 
                printf("Não é um triangulo"); 
            } 
        } 
        else 
        { 
            printf("Não é um triangulo"); 
        } 
    } 
    else 
    { 
        printf("Não é um triangulo"); 
    } 
} 
 
