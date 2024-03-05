#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int calcularMedia(float n1,float n2){
float media;
media= (n1+ n2)/2;
return media;
		
}


int main (){
setlocale(LC_ALL,"");
float primeiroNumero,segundoNumero,media;

printf("Digite o primeiro numero:");
scanf("%f",&primeiroNumero);		
	
printf("Digite o segundo numero:");
scanf("%f",&segundoNumero);
media=calcularMedia(primeiroNumero,segundoNumero);
printf("\nMedia %.1f",media);

return 0;
}
