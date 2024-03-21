#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");
//declarando variaveis
int i,idade[2];
char nome[2] [200];

 //criando primeiro laço e solicitando dados ao usuario
 for(i=0;i<2;i++){
	printf("\nDigite o %iº nome ",i+1);
	scanf("%s",&nome[i]);
	printf("\nDigite a %iº idade",i+1);
	scanf("%i",&idade[i]);
}
//segundo laço exibindo dados para o usuario
printf("----\nEXIBINDO RESULTADOS-------\n");
   for(i=0;i<2;i++){
	printf("O %iº nome:%s \n",i+1,nome[i]);
	printf("A %iº idade: %i \n \n ",i+1, idade[i]);
}
return 0;
}



