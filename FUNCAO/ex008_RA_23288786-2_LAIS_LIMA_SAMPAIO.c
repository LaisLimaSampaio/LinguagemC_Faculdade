#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int numero(char num[20],char dig[20]){
	int i,tot=0;
	for (i=0;i<strlen(num);i++){

		if (num[i]==dig[0]){
			tot++;			

		}
	}
	return tot;
}  

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	char num1[20];
	char num2[20];
	printf("NUMERO: ");
	fgets(num1,20,stdin);
	
	printf("DIGITO: ");
	fgets(num2,20,stdin);
	
	printf("O numero de vezes que o digito aparece é %i",numero(num1,num2));
	return 0;
}
