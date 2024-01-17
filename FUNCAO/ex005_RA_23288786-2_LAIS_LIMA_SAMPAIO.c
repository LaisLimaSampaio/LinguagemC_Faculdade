#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int dist(int x1,int x2,int y1,int y2){
	return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}  

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int a1 = 0,a2 = 0,b1 = 0,b2 = 0,d = 0;
	
	
	printf("X1: ");
	scanf(" %i",&a1);
	printf("X2: ");
	scanf(" %i",&a2);
	printf("Y1: ");
	scanf(" %i",&b1);
	printf("Y2: ");
	scanf(" %i",&b2);
	
	d = dist(a1,a2,b1,b2);
	
	printf("A distancia é: %i ",d);
	return 0;
}
