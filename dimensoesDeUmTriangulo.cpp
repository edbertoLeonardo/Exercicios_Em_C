/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e
escrever a área do retângulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");

int a,b;

printf("Digite a largura: ");

scanf("%i",&a);

printf("Digite a altura : ");

scanf("%i",&b);

printf("A area do retangulo é :%i",a*b);


}
