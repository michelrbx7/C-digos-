#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");
float media=0,soma,notas[3];
int i;

printf("Digite suas notas:\n");
for(i=0;i<3 ;i++){
	printf(" Nota %i",i+1);
	scanf("%f",&notas[i]);
	
	 soma+=notas[i];	 
}	
     media=soma/3;
    printf("---EXIBINDO OS RESULTADOS\n");
    for(i=0;i<3;i++){
    printf("Suas notas %i:%.1f\n",i+1,notas[i]);
 }	
 printf("\nMedia :%.1f",media);
return 0;	
}
