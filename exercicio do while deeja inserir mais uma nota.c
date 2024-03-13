#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>//converter para maiuscula

void cabecalho(){
system ("cls || clear");
printf("===SENAI===");
fflush(stdin);
}
int main(){
setlocale(LC_ALL,"");

float nota,media,soma=0;
int contador=0;
char opcao;

do{
 printf("Digite uma nota:");
scanf("%f",&nota);
	
soma+=nota;

contador++;

fflush(stdin);

printf("Deseja digitar mais uma nota?");
scanf("%c",&opcao);

opcao=toupper(opcao);
	
}while(opcao !='N');

media=soma/contador;
if(opcao=='N'&& contador >1){

printf("Media:%.1f\n",media);
printf("bloco executado %i vezes",contador);
}else{
printf("Bloco executado %i vez.",contador);
}

return 0;	
}

