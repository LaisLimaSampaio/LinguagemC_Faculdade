#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

float esfVolume(float r){
	return (3.0/4.0)*3.14*pow(r,3.0);
}  

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float raio = 0;
	float volume = 0;
	
	printf("Digite aqui o raio da esfera: ");
	scanf(" %f",&raio);
	
	volume = esfVolume(raio);
	
	printf("O volume �: %.2fm� ",volume);
	return 0;
}
