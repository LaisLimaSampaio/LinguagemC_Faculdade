#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char primeirastr[] = {"aula de "};
	char segundastr[] = {"programa��o"};
	
	strcat(primeirastr,segundastr);
	
	printf("%s",primeirastr);	
	
	
	return 0;
}
