#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	double km, hora, velo;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Esse Programa Calcula a Velocidade Media\n\n");
	
	printf("Quantos Km voce percorreu: ");
	scanf("%lf",&km);
	
	printf("Quantas horas você rodou: ");
	scanf("%lf",&hora);
	
	velo = km / hora ;
	
	printf("Sua velocidade media foi de %.2lfkm/h\n\n", velo);
	
	system("pause");
	
}
