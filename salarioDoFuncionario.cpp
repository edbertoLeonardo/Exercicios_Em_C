/*Escreva um algoritmo para ler o sal�rio mensal atual de um funcion�rio e o percentual 
de reajuste. Calcular e escrever o valor do novo sal�rio. 

*/

#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 
  
int main() { 

 
setlocale(LC_ALL, "portuguese"); 
  
  float salario, reajuste, novoSalario; 
  
  printf("Informe o sal�rio mensal: "); 
  
  scanf("%f", &salario); 
  
  printf("Informe o percentual de reajuste: "); 
  
  scanf("%f", &reajuste); 
  
  novoSalario = salario + (salario * (reajuste / 100)); 
  
  printf("Valor do novo sal�rio = R$ %.2f", novoSalario); 
  
} 
