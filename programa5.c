#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	double cel, fah;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Este Programa Converte Graus Celcius em Graus Fahrenheit\n\n");
	
	printf("Digite o valor em �C (Graus Celcius): ");
	scanf("%lf",&cel);
	
	fah = cel * 1.8 + 32 ;
	
	printf("Esta temperatura em Graus Fahrenheit � de %.1lf�F\n\n",fah);
	
	system("pause");
	
}
