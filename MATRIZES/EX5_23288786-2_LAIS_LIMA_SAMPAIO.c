#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int m1[10][10];
	int m2[10][10];
	int m3[10][10];
	int i , j;
	
	printf("	PRIMEIRA MATRIZ		\n\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf("Digite o valor da linha %i e da coluna %i: ",i,j);
			scanf("%i",&m1[i][j]);		
		}   
	}
	printf("\n	SEGUNDA MATRIZ		\n\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			printf("Digite o valor da linha %i e da coluna %i: ",i,j);
			scanf("%i",&m2[i][j]);		
		}   
	}
	
	printf("\n	 MATRIZ MUTIPLICAÇÃO		\n\n");
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			m3[i][j]=m2[i][j]*m1[i][j];
			printf("  %i  ",m3[i][j]);		
		}
		printf("\n\n");   
	}
	
}
