#include <stdio.h>

main(){
	float nota1, nota2, nota3, media;
	printf("Informe nota1:");
	scanf("%f",&nota1);
	printf("Informe nota2:");
	scanf("%f",&nota2);
	printf("Informe nota3:");
	scanf("%f",&nota3);
	
	media = (nota1*1)+(nota2*2)+(nota3*3);
	
	printf("A media eh:%f",media/6);
	
}
