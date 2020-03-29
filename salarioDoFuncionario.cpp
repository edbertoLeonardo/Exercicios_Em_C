/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual 
de reajuste. Calcular e escrever o valor do novo salário. 

*/

#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 
  
int main() { 

 
setlocale(LC_ALL, "portuguese"); 
  
  float salario, reajuste, novoSalario; 
  
  printf("Informe o salário mensal: "); 
  
  scanf("%f", &salario); 
  
  printf("Informe o percentual de reajuste: "); 
  
  scanf("%f", &reajuste); 
  
  novoSalario = salario + (salario * (reajuste / 100)); 
  
  printf("Valor do novo salário = R$ %.2f", novoSalario); 
  
} 
