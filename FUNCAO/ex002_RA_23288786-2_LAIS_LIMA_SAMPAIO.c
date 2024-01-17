#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int raiz(float num){
	
	return sqrt(num);
}  

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float numero = 0;
	float resp = 0;
	
	printf("Digite um valor aqui:");
	scanf(" %f",&numero);
	
	resp = raiz(numero);
	
	printf("A raiz quadrada do numero é : %f ",resp);
	return 0;
}
