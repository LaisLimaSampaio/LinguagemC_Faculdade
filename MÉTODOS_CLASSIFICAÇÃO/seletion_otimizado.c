#include <stdio.h>


void selection(int *vet,int n){
	
	int i,j,aux,menor;
	
	for (i = 0; i < n-1; i++){
		menor = i;
		for (j=i+1;j<n;j++){
			if (vet[j]<vet[menor]){
				menor = j;
			}
			
		}
		aux = vet[i];
		vet[i] = vet[menor];
		vet[menor] = aux;
	}
	
}
int main(){
	
	int vetor[10] = {97,2,1,5,8,3,56,87,5,7};
	int i;
	
	selection(vetor,10);
	
	for (i = 0; i< 10; i++){
		printf("%i\n",vetor[i]);
	} 
}
