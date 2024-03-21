#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 6
int main(){
setlocale(LC_ALL,"");
int i,numeros[6];
int pares=0,impares=0;


for(i= 0;i <6;i++){
printf("Digite o %iº Numero:");	
scanf("%i",&numeros[i]);
}	
fflush(stdin);
if(numeros[i] %2 ==0 ){
  pares++;	
}else{
  impares++;	
}
prinft("\n----exibindo resultados----");
for(i=0;i<6;i++){
printf("%iº numero:%i\n",i+1,numeros[i]);
}
 printf("quantidade de pares:%i \n",pares);
 printf("quantidade de impares:%i\n",impares);
return 0;
}

