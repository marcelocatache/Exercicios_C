#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	int idade;
	
	//setlocale(LC_ALL, "Portuguese");
	
	printf("Este Programa Informa a Idade para Dirigir\n\n");
	
	printf("Informe a Idade: ");
	scanf("%d",&idade);
	
	if(idade>=18){
		printf("\nVOCE PODE TIRAR SUA CNH!!!\n\n\n");		
	}
	else{
		printf("\nVoce NAO PODE tirar sua CNH\n\n\n");
	}
	
	system("pause");
	
}
