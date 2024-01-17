#include <stdio.h>
int main()
{
    char nomes[10][50];
    int j,i;
    
    for (i=0;i<10;i++){
        
        printf("Digite o seu nome e seu sobrenome aqui: ");
        gets(nomes[i]);
        
    }
    
    for (i=0;i<10;i++){
        
        printf("%s - ",nomes[i]);
        
    }
}
