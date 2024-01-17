#include <stdio.h>
#include <string.h>

void bubble(int *vet, int n){
	
	int i,j,aux;
	
	for (i=0;i<n-1;i++){
		for (j=0;j<n-i;j++){
			if (vet[j]>vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux; 
			}
		}	
	}
}

int main(){
	
	int vetor[10] = {3,7,9,3,7,4,5,7,-3,12};
	int x;
	
	bubble(vetor,10);
	
	for (x=0;x<10;x++){
		printf("%i\n",vetor[x]);
		
	}
}
