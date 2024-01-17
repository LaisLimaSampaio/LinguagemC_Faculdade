#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char frase[50];
	int i,letrasDiferentes=0,inicio,compr;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	compr = strlen(frase)-1;
	inicio = 0;
	while(compr>=inicio){
		
		if (frase[compr]!=frase[inicio]){
			
			letrasDiferentes ++;
		}
		compr --;
		inicio ++;

	}
	if (letrasDiferentes==0){
		printf("É um palindromo");
	}else{
		printf("Não é um palindromo");
	}
	
	return 0;
}
