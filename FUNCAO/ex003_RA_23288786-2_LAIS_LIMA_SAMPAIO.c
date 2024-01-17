#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int fahr(float celcius){
	return ((celcius * 1.8) + 32);
}  

float main(){
	
	setlocale(LC_ALL,"Portuguese");
	float celc = 0;
	float f = 0;
	
	printf("Digite aqui os celcius:");
	scanf(" %f",&celc);
	
	f = fahr(celc);
	
	printf("A temperatura em fahrenheint é : %.2f ",f);
	return 0;
}
