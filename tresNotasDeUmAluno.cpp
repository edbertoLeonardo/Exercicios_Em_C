/*Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste 
aluno. Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5. F�rmula 
para o c�lculo da m�dia final �: 

m�dia final = 
  
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
