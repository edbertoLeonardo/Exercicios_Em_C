/*.O custo de um carro novo ao consumidor � a soma do custo de f�brica com a 
porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo 
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um 
algoritmo para ler o custo de f�brica de um carro, calcular e escrever o custo final ao 
consumidor. 

*/


#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<locale.h> 

main()

{
setlocale(LC_ALL, "portuguese"); 

float soma, soma2, precof, precoc;


printf("De fabrica quanto custa o carro? ");

scanf("%f", &precof);

soma = precof*0.28;

soma2 = precof*0.45;

precoc = soma+soma2+precof;

printf("\nCustar� %.2f\nCom um custo de %.2f do DISTRIBUIDOR\nE tamb�m %.2f de IMPOSTO", precoc, soma, soma2);



}
