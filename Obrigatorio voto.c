#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
system ("cls || clear");
printf("======SENAI======");
fflush(stdin);	
}

int main(){
setlocale(LC_ALL,"");	

//declarando variavies
int idade=0;

//solicitando dados ao usuario

printf("\nDigite sua idade:");
scanf("%f",&idade);

//Se for maior 
 

if(idade >=18 && idade <=65);{
printf("\nÉ obrigado a votar");	
}
else if(idade <18 && idade >65);
printf("\nnão obrigatorio voto");



 






return 0;
}



	
	














	






































	

