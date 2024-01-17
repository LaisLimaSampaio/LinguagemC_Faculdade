#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char primeirastr[] = {"aula de "};
	char segundastr[] = {"programação"};
	
	strcat(primeirastr,segundastr);
	
	printf("%s",primeirastr);	
	
	
	return 0;
}
