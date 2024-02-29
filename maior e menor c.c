#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho() {
 system ("cls || clear");
 printf("====SENAI=====");
 fflush(stdin);
}


int main(){
setlocale(LC_ALL,"");

//delcarnado variaveis
int primeiroNumero,segundoNumero ;
float primeiraNota ,segundaNota,media,soma,produto,menorValor,maiorValor;


//solicitando dados ao usuario
cabecalho();
printf("\nDigite o primeiro numero:");
scanf("%i",&primeiroNumero);
cabecalho();
printf("\nDigite o segundo numero:");
scanf("%i",&segundoNumero);
soma=primeiroNumero+ segundoNumero;
media = primeiroNumero + segundoNumero/2;
produto=primeiroNumero * segundoNumero;

 cabecalho();
 printf("\n======Exibindo Resultados======");
 printf("\nPrimeiro Numero:%.1i",primeiroNumero);
 printf("\nSegundo Numero:%.1i",segundoNumero);
 printf("\nSoma:%.f",soma);
 printf("\nMedia:%.f",media);
 printf("\nproduto:%.f",produto);
 
 //se 
 if(primeiroNumero > segundoNumero){
 	printf("\nPrimeiro Numero é maior.");
}if(segundoNumero > primeiroNumero){
 printf("\nSegundo numero é maior")	;
}if(primeiroNumero == segundoNumero){
printf("\nsao iguais")	;
}

 
return 0;
}




	


