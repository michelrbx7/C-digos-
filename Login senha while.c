#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho (){
system("cls || clear");
printf("---------NASA---------");
	
}
int main(){
setlocale(LC_ALL,"");
//declarando variaveis
char login[100];
int senha,tentativas=0;

do{
	 cabecalho();
	printf("\nDigite seu login de acesso.\n");
	scanf("%s",login);
     
	 printf("\nDigite sua senha de acesso.\n");
	scanf("%i",&senha);	
	
	tentativas=tentativas+1;  
	
 } while((strcmp(login,"Michel")!= 0 || senha !=123) && tentativas < 3);
 
 if(strcmp(login,"Michel")!=0 || senha!=123){
 	printf("ACESSO NEGADO\n");
 }else {
 	printf("ACESSO CONCEDIDO\n");
 }
system("pause");
return 0;	
}

