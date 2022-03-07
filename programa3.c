#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	double real, dolar;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Este Programa Converte Reais em Dolares\n\n");
	
	printf("Digite o valor em Reais: ");
	scanf("%lf",&real);
	
	dolar = real / 5.06 ;
	
	printf("Voce tem US$%.2lf",dolar);
	
}
