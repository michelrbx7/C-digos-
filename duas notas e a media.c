#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularMedia(float n1,float n2){
float media;
media= (n1+ n2)/2;
return media;
if(media >=7){
  printf("Aprovado");
	 }else{
	 	printf("Reprovado");
	 }
	 return media;
}
float main (){
setlocale(LC_ALL,"");	
float primeiroNumero,segundoNumero,media;
printf("Digite o primeiro numero:");
scanf("%f",&primeiroNumero);	
	
printf("Digite o segundo numero:");
scanf("%f",&segundoNumero);

media=(primeiroNumero+segundoNumero)/2;
printf("\n======Exibindo Resultados======");
printf("\nPrimeiro Numero:%.1f",primeiroNumero);
printf("\nSegundo Numero:%.1f",segundoNumero);
printf("\nMedia:%.1f",media);	
return 0;
}
