#include<stdio.h>
#include<stdlib.h>

main(){
	
	int nota1, nota2, falta;
	
	printf("Este Programa Exibe a Situacao do Aluno\n\n");
	
	printf("Digite a primeira nota: ");
	scanf("%d",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%d",&nota2);
	
	printf("Digite o numero de faltas: ");
	scanf("%d",&falta);
	
	if((nota1+nota2)/2>=6&&falta<=18){
		printf("O ALUNO FOI APROVADO!!!\n\n");
	}else{
		printf("O Aluno NAO foi Aprovado\n\n");
	}
	
	system("pause");
	
}
