#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int ano_nasc, ano_atual, idade;
	
	printf("Este programa calcula a idade\n\n");
	printf("Digite o ano de nascimento: ");
	scanf("%d",&ano_nasc);
	
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	
	idade = ano_atual - ano_nasc;
	
	printf("A idade eh de %d anos\n",idade);
	
	system("pause");
	
}
