#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float converterMetrosParaCentimetros(int numero){
	return numero * 100;
}
int main(){
setlocale (LC_ALL,"");
float numero,resultado;	

printf("Digite um numero em metros:");
scanf("%f",&numero);

resultado = converterMetrosParaCentimetros(numero);

printf("resultado: %.1f centimetros. \n",resultado);

return 0;

}	
 


