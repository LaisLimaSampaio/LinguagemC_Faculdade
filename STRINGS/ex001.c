#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char primeira[50] = {"Linkin Park"};
	char segunda[50] = {"Nirvana"};
	
	strcpy(primeira,segunda);
	
	printf("%s",primeira);	
	
	
	return 0;
}
