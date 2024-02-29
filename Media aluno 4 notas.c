#include <stdio.h>
#include <stdlib.h>

void cabecalho() {
 system ("cls || clear");
 printf("====SENAI=====");
 
}

int main(){
	//declarando variaveis
char nome [200];
int idade;
float primeiraNota ,segundaNota, terceiraNota, quartaNota;
float media;


//solicitando dados ao usuario

cabecalho();
printf("\nDigite seu nome:");
scanf("%s",&nome);
cabecalho();
printf("\nDigite sua idade:");
scanf("%i",&idade);
cabecalho();
printf("\nDigite Primeira nota:");
scanf("%f",&primeiraNota);
cabecalho();
printf("\nDigite Segunda nota:");
scanf("%f",&segundaNota);
cabecalho();
printf("\nDigite Terceira nota:");
scanf("%f",&terceiraNota);
cabecalho();
printf("\nDigite Quarta nota:");
scanf("%f",&quartaNota);	

//Realizando calculos
 media = (primeiraNota + segundaNota + terceiraNota + quartaNota) /4;
 
 cabecalho();
 printf("\n======Exibindo Resultados======");
 printf("\nNome:%s",nome);
 printf("\nIdade:%i \n",idade);
 printf("\nPrimeira nota:%.1f",primeiraNota);
 printf("\nSegunda nota:%.1f",segundaNota);
 printf("\nTerceira nota:%.1f",terceiraNota);
 printf("\nQuarta nota:%.1f",quartaNota);
 printf("\nMedia=%.1f\n",media);
 
 
 return 0;
}
