#include <stdio.h>
#include <string.h>

int BuscaSeq(int pesq,int vet[],int tam){
	
	int p = -1,x = -1;
	do{
		x++;
		if (vet[x] == pesq){
			p = x;
		}
	}while(p==-1 && vet[x]<pesq);
	
	return p;
}


void insertion(int *vet,int n){
	
	int i,j,aux;
	
	for (i=1;i<n;i++){
		j=i;
		
		while (vet[j]<vet[j-1]){
			aux = vet[j];
			vet[j] = vet[j-1];
			vet[j-1]= aux;			
			
			if (j-1>0){
				j=j-1;
			}
		}		
	}
}


int main(){
	
	int vetor[10] = {12,3,5,1,7,0,3,6,-1,6};
	int i,r;
	
	insertion(vetor,10);
	
	for (i=0;i<10;i++){
		printf("%i\n",vetor[i]);
	}
	
	r = BuscaSeq(3,vetor,10);
	
	if (r=-1){
		printf("O valor não foi encontrado");
	}else{
		printf("O valor foi encontrado na posição %i.",r);
	}
	return 0;
}
