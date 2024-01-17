#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int m1[3][3];
	int m2[3][3];
	int m3[3][3];
	int i , j;
	
	printf("	PRIMEIRA MATRIZ		\n\n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Digite o valor da linha %i e da coluna %i: ",i,j);
			scanf("%i",&m1[i][j]);		
		}   
	}
	printf("	SEGUNDA MATRIZ		\n\n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Digite o valor da linha %i e da coluna %i: ",i,j);
			scanf("%i",&m2[i][j]);		
		}   
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			m3[i][j]=m2[i][j]+m1[i][j];
			printf("  %i  ",m3[i][j]);		
		}
		printf("\n\n");   
	}
	
}
