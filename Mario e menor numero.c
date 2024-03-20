#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
setlocale(LC_ALL,"");
int maiorNumero=INT_MIN,menorNumero=INT_MAX,numero[5];
int i;

printf("Digite seus numeros:\n");
for(i=0;i<5 ;i++){
  printf(" Digite o  %iº",i+1);
	scanf("%i",&numero[i]);	
	if(numero[i]>maiorNumero){
	maiorNumero=numero[i];	
	}	 
	if(numero[i]<menorNumero){
		menorNumero=numero[i];
	}
	
    }
   printf("\n----EXIBINDO NUMEROS-----"); 
   for(i=0;i<5;i++){
   	printf("%iº numeros:%i \n",i+1,numero[i]);
   	
   }
   printf("Maior numero:%i\n",maiorNumero);
   printf("Menor numero:%i\n",menorNumero);    
	
 
     
     
   
 
return 0;	
}
