#include <stdio.h>
#include <string.h>
#include <locale.h>
int primo(int num){
	
	int i,div=0;
	
	
	for (i=1;i<=num;i++){
		if (num%i==0){
			div++;
		}
		
	}
	if (div==2){
		return 1;
	}else{
		return 0;
	}	
}  

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int numero = 0,resp = 0;
	
	printf("Digite um valor aqui:");
	scanf(" %i",&numero);
	
	resp = primo(numero);
	
	if (resp==1){
		printf("O número é primo.\n");
	}else{
		printf("O número não é primo");
	}
	return 0;
}
