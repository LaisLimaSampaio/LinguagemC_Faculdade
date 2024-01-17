#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int intervalo(int inicio,int fim){
	int i=inicio,tot=0;

	while (i<=fim){
		tot=tot+i;
		i++;
	}
	
	return tot;
}
  

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int num1;
	int num2;
	printf("INICIO: ");
	scanf("%i",&num1);	
	printf("FIM: ");
	scanf("%i",&num2);
	
	printf("SOMA: %i",intervalo(num1,num2));
	return 0;
}
