#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v1[4][4];
	int i,j,soma,maior,maiorj,maiori;
	
	for (i=0;i<4;i++){
		soma=0;
		printf("\n\n%iª LINHA\n",i+1);
		
		for (j=0;j<4;j++){
			printf("Escreva o valor da posição [%i] [%i] : ",i,j);
			scanf(" %i",&v1[i][j]);
			soma = soma+v1[i][j];
		}
		printf("A soma da linha %i é %i.",i,soma);
	}
	
}
	
