#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
system("cls || clear");	
printf("====SENAI====\n");
fflush(stdin);
}

int somar(int n1, int n2, int n3, int n4){
int soma;
soma=n1+n2+n3+n4;
return soma;	
}


int main(){
setlocale(LC_ALL,"");	

int numero,i,soma=0;

cabecalho ();
for(i =1; i<=4; i++){
 do{
 printf("Digite a %iª Numero:",i);
 scanf("%i",&numero);
 } while(numero <1 || numero >10);
 soma=soma+numero;
}
 cabecalho();	
printf("\nSoma:%i \n",soma);
return 0;	
}
