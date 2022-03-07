#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	float peso, alt, imc;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Este Programa Calcula o IMC\n\n");
	
	printf("Digite o seu peso: ");
	scanf("%f",&peso);
	
	printf("Digite a sua altura: ");
	scanf("%f",&alt);
	
	imc = peso / (alt * alt);
	
	printf("\nO IMC e %.1f ==> ",imc);
	
	if(imc<18.5){
		printf("Abaixo do Peso\n\n");
	}
	else{
		if(imc>=18.5&&imc<25){
			printf("Peso Normal\n\n");
		}else{
			if(imc>=25&&imc<30){
				printf("Acima do Peso\n\n");
			}else{
				printf("Obeso\n\n");
			}
		}
	}
	
	system("pause");
	
}
