#include <stdio.h>
#include <stdlib.h>
 void cabecalho() {
 system ("cls || clear");
 printf("====SENAI=====");
}
//declarando variaveis
int main(){
int primeiroNumero,segundoNumero,terceiroNumero,quartoNumero,quintoNumero;
float soma;

//solicitando dados ao usuario
 cabecalho();
printf("\nDigite um numero:");
scanf("%i",&primeiroNumero);

printf("\nDigite um numero:");
scanf("%i",&segundoNumero);

printf("\nDigite um numero:");
scanf("%i",&terceiroNumero);

printf("\nDigite um numero:");
scanf("%i",&quartoNumero);

printf("\nDigite um numero:");
scanf("%i",&quintoNumero);	

soma=(primeiroNumero + segundoNumero +terceiroNumero + quartoNumero+ quintoNumero);

 cabecalho();
 printf("\n======Exibindo Resultados======");
 printf("\nPrimeiro Numero:%.1i",primeiroNumero);
 printf("\nSegundo Numero:%.1i",segundoNumero);
 printf("\nTerceiro Numero:%.1i",terceiroNumero);
 printf("\nQuarto Numero:%.1i",quartoNumero);
 printf("\nQuinto Numero:%.1i",quintoNumero);
 printf("\nSoma=%.1f\n",soma);
 
 
	
	
	
return 0;	
}
