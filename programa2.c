#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	double nota1, nota2, nota3, nota4, nota5, media;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Este Programa Calcula Media de 2 Notas\n\n");
	
	printf("Digite a nota1: ");
	scanf("%lf",&nota1);
	
	printf("Digite a nota2: ");
	scanf("%lf",&nota2);
	
	media = (nota1 + nota2) / 2 ;
	
	printf ("Sua media é %.2lf\n\n",media);
	
	system("pause");
	
}
