#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void cabecalho(){
system("cls|| clear");
printf("===Welcome BITCH===");
fflush(stdin);
}
int main(){
setlocale(LC_ALL,"");	

//declarando variaveis
char login [200], senha[200];
char loginCadastrado[200]="Michel",senhaCadastrada[200]="123";
 
 //solicitando dados ao usuario
 cabecalho();
 printf("\n====Bem Vindo ao sistema====");
 printf("\nDigite seu login:");
 scanf("%s",&login);
 printf("\nDigite sua senha:");
 scanf("%s",&senha);
 
 //exibindo resultados

 cabecalho ();
 if(strcmp(login,loginCadastrado)==0 && strcmp (senha,senhaCadastrada)==0){
 	printf("\Bem Vindo!");
 }else{
 printf("\nacesso negado");
 }
 	
 

 
 
  
 return 0;
}	
	

