#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v1[4][4];
	int i,j,maior,maiorj,maiori;
	
	for (i=0;i<4;i++){
		printf("\n\n%iª LINHA\n",i+1);
		for (j=0;j<4;j++){
			printf("Escreva o valor da posição [%i] [%i] : ",i,j);
			scanf(" %i",&v1[i][j]);
			if (i==0 && j==0){
				maior=v1[i][j];
				maiori=i;
				maiorj=j;
			}
			else{
				if (v1[i][j]>maior){
					maior=v1[i][j];
					maiori=i;
					maiorj=j;
				}
			}
		}		
		
	}
	
	printf("O maior valor é %i na posição [%i] [%i] ",maior,maiori,maiorj);
}
