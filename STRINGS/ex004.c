#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char frase[50],original[50];
	int i,vogais=0;
	
	printf("Escreva algo: ");
	gets(original);
	
	strcpy(frase,strupr(original));
	
	i = 0;
	
	while(i<strlen(frase)){
		if (frase[i]=='A' || frase[i] == 'E'|| frase[i]== 'I'|| frase[i] == 'O'|| frase[i] == 'U'){
			vogais++;
		}
		i++;
	
	}
	printf("A quantidade de vogais da frase é : %i",vogais);
	
	return 0;
}
