/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste 
aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula 
para o cálculo da média final é: 

média final = 
  
n1 * 2 + n2 * 3 + n3 * 5 
--------------------------- 
10 

*/

#include<stdio.h> 
#include<stdlib.h> 
int main(void) 
{ 
  float nota1, nota2, nota3, media; 
   
   
  printf("Digite a primeira nota do aluno: "); 
  scanf("%f",&nota1); 
   
  printf("Digite a segunda nota do aluno: "); 
  scanf("%f",&nota2); 
   
  printf("Digite a terceira nota do aluno: "); 
  scanf("%f",&nota3); 
   
   
  media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10; 
   
   
  printf("Media do aluno = %.1f\n",media); 
   
  } 
