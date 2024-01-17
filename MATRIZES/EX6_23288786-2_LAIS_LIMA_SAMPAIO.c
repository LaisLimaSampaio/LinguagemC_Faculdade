#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int m1[4][4];
	int i , j;
	
	printf("	LEIA MATRIZ		\n\n");
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			printf("Digite o valor da linha %i e da coluna %i: ",i,j);
			scanf("%i",&m1[i][j]);		
		}   
	}
	printf("	 MATRIZ		\n\n");
	
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			if (i==j){
				printf("  %i  ",m1[i][j]);
			}
			else{
				printf("      ");
			}
		}
		printf("\n\n");   
	}
	
}
