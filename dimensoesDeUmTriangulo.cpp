/*Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e
escrever a �rea do ret�ngulo.*/

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

printf("A area do retangulo � :%i",a*b);


}
