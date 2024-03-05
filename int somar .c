#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int somar(int n1,int n2){
int soma;
soma= n1+ n2;
return soma;
		
}


int main (){
setlocale(LC_ALL,"");
int primeiroNumero,segundoNumero,soma;

printf("Digite o primeiro numero:");
scanf("%i",&primeiroNumero);	
	
printf("Digite o segundo numero:");
scanf("%i",&segundoNumero);

soma =somar(primeiroNumero,segundoNumero);
printf("\nSoma:%i",soma);
return 0;
}
