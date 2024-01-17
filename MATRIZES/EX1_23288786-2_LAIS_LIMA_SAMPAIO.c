#include <stdio.h>
#include <locale.h>


main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int m1[3][3];
	int i,j;
	
	for (i=0;i<3;i++){
		
		for (j=0;j<3;j++){
			
			printf("ESCREVA O VALOR DA POSIÇÃO [%i] [%i]: ",i,j);
			scanf("%i",&m1[i][j]);
		}
		
	}
	
	for (i=0;i<3;i++){
		
		for (j=0;j<3;j++){
			
			printf("  %i  ",m1[i][j]);
		}
		printf("\n\n");	
	}
}
