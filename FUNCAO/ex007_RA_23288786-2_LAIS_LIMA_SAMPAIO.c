#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int array(int num[],int tam){
	int x,maior = 0;
	for (x=0;x<tam;x++){
		if (num[x]>maior){
			maior=num[x];
		}
	}
	return maior;
}  

int main(){
	int vet[4] = {1,2,4,7};
	int r=0;
	setlocale(LC_ALL,"Portuguese");
	printf("%i",array(vet,4));
	return 0;
}
