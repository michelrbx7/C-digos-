#include <stdio.h>
#include <stdlib.h>

int main(){
//declarando variaveis
float primeiroNumero,segundoNumero;
float soma,subtracao,multiplicacao,divisao;

//solicitando dados ao usuario
printf("Digite o primeiro numero:");
scanf("%f",&primeiroNumero);

printf("Digite o segundo numero:");
scanf("%f",&segundoNumero);

//realizando calculos 
soma=primeiroNumero + segundoNumero;
subtracao=primeiroNumero - segundoNumero;
multiplicacao=primeiroNumero * segundoNumero;
divisao=primeiroNumero / segundoNumero;

system ("cls || clear  ");

//exibindo resultados
printf("\n====Exibindo resultados===");
printf("\nPrimeiro numero:%.1f\n",primeiroNumero);
printf("\nSegundo numero:%.1f \n",segundoNumero);
printf("\nSoma:%.1f \n",soma);
printf("\nSubtracao:%.1f \n",subtracao);
printf("\nMultiplicacao:%.1f \n",multiplicacao);
printf("\ndivisao:%.1f \n",divisao);
}

