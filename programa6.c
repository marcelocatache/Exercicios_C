#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
	
	int a, b, c, pb, delta, rdel, x1, x2;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Este Programa Calcula Equacao de 2º Grau\n\n");
	
	printf("Digite o valor de A: ");
	scanf("%d",&a);
	
	printf("Digite o valor de B: ");
	scanf("%d",&b);
	
	printf("Digite o valor de C: ");
	scanf("%d",&c);
	
	//pb = pow (b, 2);
	
	delta = b * b - 4 * a * c ;
	
	rdel = sqrt (delta) ;
	
	x1 = b +  rdel / 2 * a ;
	
	x2 = b -  rdel / 2 * a ;
	
	printf("O valor de Delta e %d, de X1 e %d e de X2 e %d\n\n", delta, x1, x2);
	
	printf("%d\n\n",rdel);
	
	system("pause");
	
}
