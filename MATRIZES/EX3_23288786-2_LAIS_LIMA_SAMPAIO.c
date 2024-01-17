#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
    int quant_alunos = 0;
    printf("Digite a quantidade de alunos:  ");
    scanf("%i",&quant_alunos);
    
    char nomes[quant_alunos][50];
    float notas [quant_alunos];
    int j,i,maiori,menori;
    float media,maior_nota,menor_nota = 0;
    
    fflush(stdin);
    
    for (i=0;i<quant_alunos;i++){
        printf("\n\nDigite o nome do %io aluno: ",i+1);
        fgets(nomes[i],50,stdin);
        
    }
    
    for (i=0;i<quant_alunos;i++){
        
        printf("\n\nDigite a nota de %s:  ",nomes[i]);
        scanf(" %f",&notas[i]);
        media+=notas[i];
        if (i==0){
            maior_nota = notas[i];
            maiori = i;
            menor_nota = notas[i];
            menori = i;
        }
        else{
            if (notas[i]>maior_nota){
                
                maior_nota = notas[i];
                maiori = i;
            }
            if (notas[i]<menor_nota){
                menor_nota = notas[i];
                menori = i;
            }
        }
        
    }
    media/=quant_alunos;
    printf("\nA media das notas dos alunos é: %.2f\n",media);
    printf("\nMAIOR NOTA = %.2f = %s\nMENOR NOTA = %.2f = %s",maior_nota,nomes[maiori],menor_nota,nomes[menori]);
    

    return 0;
}


		
