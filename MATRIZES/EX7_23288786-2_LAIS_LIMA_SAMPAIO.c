#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int m1[3][3];
	int m2[3][3];
	int i , j;
	
	printf("	LEIA MATRIZ		\n\n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Digite o valor da linha %i e da coluna %i: ",i,j);
			scanf("%i",&m1[i][j]);
			m2[j][i]=m1[i][j];		
		}   
	}
	printf("	MATRIZ TRANSPOSTA		\n\n");
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("  %i  ",m2[i][j]);		
		}
		printf("\n\n");   
	}
	
}
