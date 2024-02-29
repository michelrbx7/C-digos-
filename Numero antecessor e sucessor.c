#include <stdio.h>
#include <stdlib.h>
 void cabecalho() {
 system ("cls || clear");
 printf("====SENAI=====");
}

//declarando variaveis
int main(){
	int numero,antecessor,sucessor;
	
	
//solicitando dados ao usuario	
    cabecalho();
	printf("\nDigite um numero:");
	scanf("%i",&numero);
	
	//verificando antecessor/sucessor
	cabecalho();
	antecessor= numero -1;
	sucessor =numero +1;
	printf("\nnumero:%i\n",numero);
	printf("\nantecessor:%i\n",antecessor);
	printf("\nsucessor:%i \n",sucessor);
	return 0;
}
