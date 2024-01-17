#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int m1[3][3];
	int m2[3][3];
	int i , j,iguais;
	
	printf("	LEIA MATRIZ		\n\n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Digite o valor da linha %i e da coluna %i: ",i,j);
			scanf("%i",&m1[i][j]);
			m2[j][i]=m1[i][j];		
		}   
	}
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (m2[i][j]==m1[i][j]){
				iguais++;
			}
		}  
	}
	
	if (iguais==9){
		printf("Essa matriz é simétrica");
	}else{
		printf("Essa matriz não é simétrica");
	}
	
	
	
}
