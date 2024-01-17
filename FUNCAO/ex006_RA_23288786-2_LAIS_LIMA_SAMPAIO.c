#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int numero(int num){
	int u=0,d=0,c=0;
	u=num%10;
	d=num%100;
	c=num%1000;
	
	d=d-u;
	c=c-(u+d);
	d=d/10;
	c=c/100;
	num=(u*100)+(d*10)+(c*1);
	return num;
}  

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int num = 0;
	
	do{
	printf("NUMERO: ");
	scanf(" %i",&num);
	}while(num>=1000);
	num=numero(num);
	printf("%i",num);
	return 0;
}
