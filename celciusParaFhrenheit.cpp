/*2. Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).


(0 °C × 9/5) + 32 = 32 °F

C
5
=
F - 32
9
*/


#include<stdio.h>
#include<stdlib.h>

int main (){
	
	float celsius, fahr;
	int  c = 167;
	
	printf("Digite uma temperatura em %cCelcius : ", c);
	
	scanf("%f", &celsius);
	
	fahr = celsius*(9.0/5.0)+32;
	
	printf("%3.f%cC equivale a %3.f%cF", celsius, c, fahr,c );
}

