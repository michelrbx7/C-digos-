#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");
//declarando variaveis
int negativo=0,i;
float soma=0,numero[2];


 //criando primeiro laço e solicitando dados ao usuario
 for(i=0;i<2;i++){
	printf("\nDigite o %iº numero ",i+1);
	scanf("%f",&numero[i]);
	
	if(numero[i]>0){
		soma+=numero[i];
	}
	if(numero [i]<0){
		negativo++;
	}
}
//segundo laço exibindo dados para o usuario
printf("----\nEXIBINDO RESULTADOS-------\n");
   printf("\na soma dos numeros %.1f. ",soma);
   printf("\na quantidade de numeros negativos %i",negativo);
return 0;
}



